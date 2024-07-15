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
        
        // I will add changeable colors once I add glm to the project
        glClearColor(0.25f, 0.5f, 0.85f, 0.5f);
    }

    lWindow::~lWindow() {
        glfwTerminate();
    }
    
    void lWindow::Run() {
        glfwPollEvents();
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(m_Window);
    }
}