#ifndef LAMBDA_APPLICATION_H
#define LAMBDA_APPLICATION_H

#include "window/Window.h"
#include "input/InputManager.h"

namespace Lambda {
    
    class lApplication {
        public:
            lApplication();
            virtual ~lApplication();

            void Run();

            virtual void Start() = 0;
            virtual void Update() = 0;
        private:
            bool m_IsRunning = true;

            lWindow* m_lWindow = nullptr;
            lInputManager* m_lInputManager = nullptr;
    };

    // Defined in client
    lApplication* CreatelApplication();
}

#endif