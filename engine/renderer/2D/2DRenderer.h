#ifndef LAMBDA_2DRENDERER_H
#define LAMBDA_2DRENDERER_H

// lglObjects
#include "graphics/opengl/VertexBuffer.h"
#include "graphics/opengl/VertexArray.h"
#include "graphics/opengl/glObject.h"
#include "graphics/opengl/Shader.h"

namespace Lambda {

    class l2DRenderer {
    public:
        l2DRenderer();
        ~l2DRenderer();

        void DrawTriangle();

        void ClearColor();

        //void NewVertexAttribute();

        //inline static lVertexBuffer* NewVertexBuffer() { return new lVertexBuffer(); }
    private:
        lShader* m_glShaders;
        lVertexArray* m_glVertexArray;
    };

}


#endif