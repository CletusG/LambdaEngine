#ifndef LAMBDA_2DRENDERER_H
#define LAMBDA_2DRENDERER_H

#include "graphics/opengl/VertexArray.h"
#include "graphics/opengl/Shader.h"
#include "graphics/opengl/Texture.h"

#include <memory>

namespace Lambda {

    class l2DRenderer {
    public:
        l2DRenderer();
        ~l2DRenderer();

        void DrawTriangle();
        void DrawSquare();

        void ClearColor();

        //inline static lVertexBuffer* NewVertexBuffer() { return new lVertexBuffer(); }

        lShader* GetShader() { return m_glShaders; }


        // Ideally:
        // DrawSprite(transform, texture); 

    private:
        // I need a better solution than this
        lShader* m_glShaders;
        lVertexArray* m_glVertexArray;
        
        std::unique_ptr<lTexture> m_Texture1 = std::make_unique<lTexture>("tests/DemoApplication/assets/grass.jpg");
        std::unique_ptr<lTexture> m_Texture2 = std::make_unique<lTexture>("tests/DemoApplication/assets/coal.jpg");

        void SetVertexAttribute(unsigned int location, unsigned int size, 
            unsigned long stride, unsigned long offset);
    };

}


#endif