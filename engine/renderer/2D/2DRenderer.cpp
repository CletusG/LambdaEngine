#include "pch.h"
#include "2DRenderer.h"

#include "glad/glad.h"
#include "GLFW/glfw3.h"

namespace Lambda {
    
    l2DRenderer::l2DRenderer()
        : m_glShaders( new lShader() )
        , m_glVertexArray( new lVertexArray() ) {

        m_glShaders->Init("engine/shaders/vertex.vs", "engine/shaders/fragment.fs");

        m_glVertexArray->Generate();
        m_glVertexArray->Bind();

        lVertexBuffer l_vertexBuffer;
        l_vertexBuffer.Generate();
        l_vertexBuffer.Bind();

        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
        glEnableVertexAttribArray(0);

        l_vertexBuffer.Unbind();
        m_glVertexArray->Unbind();
    }

    l2DRenderer::~l2DRenderer() {
    }

    void l2DRenderer::DrawTriangle() {
        m_glShaders->Use();
        m_glVertexArray->Bind();
        
        glDrawArrays(GL_TRIANGLES, 0, 3);
    }

    void l2DRenderer::ClearColor() {
        glClearColor(0.25f, 0.5f, 0.85f, 0.5f);
        glClear(GL_COLOR_BUFFER_BIT);
    }
}