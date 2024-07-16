#pragma once

#include "glad/glad.h"
#include "GLFW/glfw3.h"

namespace Lambda {

    typedef void (*lFunctionPointer_t)(GLFWwindow* window, int width, int height);

    namespace EventManager {
        lFunctionPointer_t GetFramebufferCallbackFunc();
    };
     
}