#ifndef LAMBDA_2DRENDERER_H
#define LAMBDA_2DRENDERER_H

#include "graphics/opengl/VertexArray.h"
#include "graphics/opengl/Shader.h"

namespace Lambda {

    class l2DRenderer {
    public:
        l2DRenderer();
        ~l2DRenderer();

        void DrawTriangle();
        void DrawSquare();

        void ClearColor();

        //void NewVertexAttribute();

        //inline static lVertexBuffer* NewVertexBuffer() { return new lVertexBuffer(); }
    private:
        lShader* m_glShaders;
        lVertexArray* m_glVertexArray;
    };

}


#endif