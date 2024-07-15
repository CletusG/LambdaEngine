#pragma once

#include "OpenGL/Window.h"

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
    };

    //Define in client
    lApplication* CreatelApplication();
}