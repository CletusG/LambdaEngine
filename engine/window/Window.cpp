#include "pch.h"
#include "Window.h"

namespace Lambda {
    
    lWindow::lWindow(const char* name, int width, int height ) {   
        glfwInit();
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

        m_Window = glfwCreateWindow(width, height, name, NULL, NULL);
        glfwMakeContextCurrent(m_Window);

        if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
          Logger::IntlERROR("Failed to initialize GLAD!");
        }

        glfwSetFramebufferSizeCallback(m_Window, [](GLFWwindow* window, int width, int height)
        {
            glViewport(0,0, width, height);
        });
    }

    lWindow::~lWindow() {
        glfwDestroyWindow(m_Window);
        glfwTerminate();
    }
    
    void lWindow::Run() {
        glfwPollEvents();
        glfwSwapBuffers(m_Window);
    }
}