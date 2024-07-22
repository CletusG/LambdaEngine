#include "pch.h"
#include "VertexArray.h"

#include "glad/glad.h"
#include "GLFW/glfw3.h"

namespace Lambda {

    lVertexArray::~lVertexArray() {
        glDeleteVertexArrays(1, &m_ID);
    }

    void lVertexArray::Generate() {
        glGenVertexArrays(1, &m_ID);
    }

    void lVertexArray::Bind() {
        glBindVertexArray(m_ID);
    }

    void lVertexArray::Unbind() {
        glBindVertexArray(0);
    }
}
