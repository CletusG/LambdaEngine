#ifndef LAMBDA_2DRENDERER_H
#define LAMBDA_2DRENDERER_H

#include "graphics/opengl/VertexArray.h"
#include "graphics/opengl/Shader.h"
#include "graphics/opengl/Texture.h"

namespace Lambda {

    class l2DRenderer {
    public:
        l2DRenderer();
        ~l2DRenderer();

        void DrawTriangle();
        void DrawSquare();

        void ClearColor();

        //inline static lVertexBuffer* NewVertexBuffer() { return new lVertexBuffer(); }
    private:
        // I need a better solution than this
        lShader* m_glShaders;
        lVertexArray* m_glVertexArray;
        
        void SetVertexAttribute(unsigned int location, unsigned int size, 
            unsigned long stride, unsigned long offset);
    };

}


#endif