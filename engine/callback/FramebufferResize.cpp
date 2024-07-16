#include "FramebufferResize.h"

void lFramebufferResizeCallbackFunc(GLFWwindow *window, int width, int height) {
        glViewport(0,0, width, height);
}

namespace Lambda {
    
    lFunctionPointer_t Lambda::EventManager::GetFramebufferCallbackFunc()
    {
        return &lFramebufferResizeCallbackFunc;
    }
    
}