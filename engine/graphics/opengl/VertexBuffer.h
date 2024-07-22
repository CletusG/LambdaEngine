#ifndef LAMBDA_VERTEXBUFFER_H
#define LAMBDA_VERTEXBUFFER_H

#include "glObject.h"

namespace Lambda {
    
    class lVertexBuffer : public lglObject {
    public:
        lVertexBuffer();
        ~lVertexBuffer();

        void Bind();
        void Unbind();
        void CopyData();
    private:
        
        // Demo triangle vertices
        float m_TriangleVertices[9] = {
            -0.5f, -0.5f, 0.0f,
            0.5f, -0.5f, 0.0f,
            0.0f, 0.5f, 0.0f
        };

        // Demo square vertices
        float m_SquareVertices[12] = {
            0.5f, 0.5f, 0.0f,
            0.5f, -0.5f, 0.0f,
            -0.5f, -0.5f, 0.0f,
            -0.5f, 0.5f, 0.0f
        };

    };
}

#endif