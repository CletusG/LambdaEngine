#include "pch.h"
#include "ElementBuffer.h"

namespace Lambda {
    
    lElementBuffer::lElementBuffer() {
        glGenBuffers(1, &m_ID);
    }

    void lElementBuffer::Bind() {
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_ID);
    }
    
    void lElementBuffer::Unbind() {
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
    }
    
    void lElementBuffer::CopyData() {
        glBufferData(
            GL_ELEMENT_ARRAY_BUFFER, 
            sizeof(m_SquareIndices), 
            m_SquareIndices,
            GL_STATIC_DRAW);
    }
}