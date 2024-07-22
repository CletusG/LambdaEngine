#include "pch.h"
#include "VertexBuffer.h"

#include "glad/glad.h"
#include "GLFW/glfw3.h"

namespace Lambda {
    
    lVertexBuffer::~lVertexBuffer() {
        glDeleteBuffers(1, &m_ID);
    }

    void lVertexBuffer::Generate() {
        glGenBuffers(1, &m_ID);
    }

    void lVertexBuffer::Bind() {
        glBindBuffer(GL_ARRAY_BUFFER, m_ID);
        glBufferData(GL_ARRAY_BUFFER, sizeof(m_Vertices), m_Vertices, GL_STATIC_DRAW);
    }

    void lVertexBuffer::Unbind() {
        glBindBuffer(GL_ARRAY_BUFFER, 0);
    }
}