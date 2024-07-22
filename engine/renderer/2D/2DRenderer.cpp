#include "pch.h"
#include "2DRenderer.h"

#include "glad/glad.h"
#include "GLFW/glfw3.h"

#include "graphics/opengl/VertexBuffer.h"
#include "graphics/opengl/ElementBuffer.h"

namespace Lambda {
    
    l2DRenderer::l2DRenderer()
        : m_glShaders( new lShader() )
        , m_glVertexArray( new lVertexArray() ) {

        m_glShaders->Init("engine/shaders/vertex.vs", "engine/shaders/fragment.fs");

        /*This data needs to change depending on if you are rendering a square or a triangle.
          Dont just call DrawTriangle() and DrawSquare().
          Right now, this is setup to run DrawSquare()*/

        // Generate OpenGL objects
        lVertexBuffer l_glVertexBuffer;
        lElementBuffer l_glElementBuffer;
        //Vertex Array generated in constructor

        // Bind Vertex Array now so the following buffer objects created are stored in the vertex array
        m_glVertexArray->Bind();
        // Vertex Buffer
        l_glVertexBuffer.Bind();
        l_glVertexBuffer.CopyData();
        // Element Buffer
        l_glElementBuffer.Bind();
        l_glElementBuffer.CopyData();

        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
        glEnableVertexAttribArray(0);

        m_glVertexArray->Unbind();
        l_glVertexBuffer.Unbind();
        l_glElementBuffer.Unbind();
    }

    l2DRenderer::~l2DRenderer() {
    }

    void l2DRenderer::DrawTriangle() {
        m_glShaders->Use();
        m_glVertexArray->Bind();
        
        glDrawArrays(GL_TRIANGLES, 0, 3);
    }

    void l2DRenderer::DrawSquare() {
        m_glShaders->Use();
        m_glVertexArray->Bind();

        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

        m_glVertexArray->Unbind();
    }

    void l2DRenderer::ClearColor() {
        glClearColor(0.25f, 0.5f, 0.85f, 0.5f);
        glClear(GL_COLOR_BUFFER_BIT);
    }
}