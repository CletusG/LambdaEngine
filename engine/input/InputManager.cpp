#include "pch.h"
#include "InputManager.h"

namespace Lambda {
    
    Lambda::lInputManager::lInputManager(lWindow &window)
    : m_lWindow { window } {
    }

    Lambda::lInputManager::~lInputManager() {
    }

    // I added else to these if statements so the compiler stops warning about these functions
    bool lInputManager::GetKeyPressed(lKey key) {
        if (glfwGetKey(m_lWindow.GetWindow(), key) == GLFW_PRESS) {
            return true;
        }
        else {
            return false;
        }
    }

    bool lInputManager::GetMousePressed(lButton button) {
        if (glfwGetKey(m_lWindow.GetWindow(), button) == GLFW_PRESS) {
            return true;
        }
        else {
            return false;
        }
    }

    bool lInputManager::GetKeyReleased(lKey key) {
        if (glfwGetKey(m_lWindow.GetWindow(), key) == GLFW_RELEASE) {
            return true;
        }
        else {
            return false;
        }
    }

    bool lInputManager::GetMouseReleased(lButton button) {
        if (glfwGetKey(m_lWindow.GetWindow(), button) == GLFW_RELEASE) {
            return true;
        } 
        else {
            return false;
        }
    }

    int lInputManager::ListenForKey() {
        return 0;
    }

    int lInputManager::ListenForMouse() {
        return 0;
    }
}