#ifndef LAMBDA_FRAMEBUFFERRESIZE_H
#define LAMBDA_FRAMEBUFFERRESIZE_H

#include "glad/glad.h"
#include "GLFW/glfw3.h"

namespace Lambda {

    typedef void (*lFunctionPointer_t)(GLFWwindow* window, int width, int height);

    namespace EventManager {
        lFunctionPointer_t GetFramebufferCallbackFunc();
    };
     
}

#endif