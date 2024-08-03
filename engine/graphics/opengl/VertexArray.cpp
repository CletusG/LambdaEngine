#include "pch.h"
#include "VertexArray.h"

namespace Lambda {

    lVertexArray::lVertexArray() {
        glGenVertexArrays(1, &m_ID);
    }

    lVertexArray::~lVertexArray() {
        glDeleteVertexArrays(1, &m_ID);
    }

    void lVertexArray::Bind() {
        glBindVertexArray(m_ID);
    }

    void lVertexArray::Unbind() {
        glBindVertexArray(0);
    }
}
