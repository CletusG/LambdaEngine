#include "pch.h"
#include "InputManager.h"

namespace Lambda {
    
    Lambda::lInputManager::lInputManager(lWindow &window)
    : m_lWindow { window } {
    }

    Lambda::lInputManager::~lInputManager() {
    }

    bool lInputManager::GetKeyPressed(lKey key) {
        if (glfwGetKey(m_lWindow.GetWindow(), key) == GLFW_PRESS) {
            return true;
        }
    }

    bool lInputManager::GetMousePressed(lButton button) {
        if (glfwGetKey(m_lWindow.GetWindow(), button) == GLFW_PRESS) {
            return true;
        }
    }

    bool lInputManager::GetKeyReleased(lKey key) {
        if (glfwGetKey(m_lWindow.GetWindow(), key) == GLFW_RELEASE) {
            return true;
        }
    }

    bool lInputManager::GetMouseReleased(lButton button) {
        if (glfwGetKey(m_lWindow.GetWindow(), button) == GLFW_RELEASE) {
            return true;
        }
    }

    int lInputManager::ListenForKey() {
        return 0;
    }

    int lInputManager::ListenForMouse() {
        return 0;
    }
}