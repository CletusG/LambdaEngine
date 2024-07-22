#ifndef LAMBDA_VERTEXBUFFER_H
#define LAMBDA_VERTEXBUFFER_H

#include "glObject.h"

namespace Lambda {
    
    class lVertexBuffer : public lglObject {
    public:
        lVertexBuffer() {};
        ~lVertexBuffer();

        /* The generate function is seperate for the sake of code readability/clarity 
        when initializing OpenGL through l2DRenderer (see also lVertexArray)*/
        void Generate();

        void Bind();
        void Unbind();

        float* GetVertices() { return m_Vertices; }
    private:
        
        // Demo triangle vertices
        float m_Vertices[9] = {
            -0.5f, -0.5f, 0.0f,
            0.5f, -0.5f, 0.0f,
            0.0f, 0.5f, 0.0f
        };

    };
}

#endif