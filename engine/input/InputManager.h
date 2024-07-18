#pragma once

#include "window/Window.h"
#include "keycodes.h"
#include "mousecodes.h"

namespace Lambda {

    class lInputManager {
    public:
        lInputManager(lWindow& window);
        ~lInputManager();

        bool GetKeyPressed(lKey key);
        bool GetMousePressed(lButton button);
        bool GetKeyReleased(lKey key);
        bool GetMouseReleased(lButton button);
        int ListenForKey(); 
        int ListenForMouse();
    private:
        lWindow& m_lWindow;
    };
}