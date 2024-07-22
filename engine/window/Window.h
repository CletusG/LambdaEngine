#ifndef LAMBDA_WINDOW_H
#define LAMBDA_WINDOW_H

#include "glad/glad.h"
#include "GLFW/glfw3.h"

namespace Lambda {
    
    class lWindow {
    public:
        lWindow(const char* name, int width, int height);
        ~lWindow();

        void Run();

        inline GLFWwindow* GetWindow() { return m_Window;}
    private:
        GLFWwindow* m_Window;

        // I will do window events later
        //void m_FramebufferResizeCallback(GLFWwindow* window, int width, int height);
    };
}

#endif