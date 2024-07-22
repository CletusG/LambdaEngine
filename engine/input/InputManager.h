#ifndef LAMBDA_INPUTMANAGER_H
#define LAMBDA_INPUTMANAGER_H

#include "window/Window.h"
#include "keycodes.h"
#include "mousecodes.h"

// I might make this static eventually

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

#endif