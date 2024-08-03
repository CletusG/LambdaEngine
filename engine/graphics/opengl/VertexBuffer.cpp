#include "pch.h"
#include "VertexBuffer.h"

namespace Lambda {
    
    lVertexBuffer::lVertexBuffer() {
        glGenBuffers(1, &m_ID);
    }

    lVertexBuffer::~lVertexBuffer() {
        glDeleteBuffers(1, &m_ID);
    }

    void lVertexBuffer::Bind() {
        glBindBuffer(GL_ARRAY_BUFFER, m_ID);
    }

    void lVertexBuffer::Unbind() {
        glBindBuffer(GL_ARRAY_BUFFER, 0);
    }

    void lVertexBuffer::CopyData() {
        glBufferData(
            GL_ARRAY_BUFFER, 
            sizeof(m_SquareVertices), 
            m_SquareVertices, 
            GL_STATIC_DRAW);
    }
}