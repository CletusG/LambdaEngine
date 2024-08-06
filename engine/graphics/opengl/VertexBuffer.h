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
        // Pos 0 = vertex position data
        // Pos 1 = vertex color data
        float m_TriangleVertices[18] = {
            -0.5f, -0.5f, 0.0f,    1.0f, 0.0f, 0.0f,
            0.5f, -0.5f, 0.0f,     0.0f, 1.0f, 0.0f,
            0.0f, 0.5f, 0.0f,      0.0f, 0.0f, 1.0f
        };

        // Demo square vertices
        float m_SquareVertices[32] = {
            0.5, 0.5f, 0.0f,     1.0f, 1.0f,    1.0f, 0.0f, 0.0f,
            0.5f, -0.5f, 0.0f,    1.0f, 0.0f,   0.0f, 1.0f, 0.0f,
            -0.5f, -0.5f, 0.0f,   0.0f, 0.0f,   0.0f, 0.0f, 1.0f,
            -0.5f, 0.5f, 0.0f,     0.0f, 1.0f,   1.0f, 1.0f, 1.0f
        };

    };
}

#endif