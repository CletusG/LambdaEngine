#pragma once

#include "glad/glad.h"
#include "GLFW/glfw3.h"

namespace Lambda {
    
    class lWindow {
    public:
        lWindow(const char* name, int width, int height);
        ~lWindow();

        void Run();

        inline GLFWwindow* GetWindow() { return m_Window;}

        void SetFramebufferResizeCallback();
    private:
        GLFWwindow* m_Window;
    };
}