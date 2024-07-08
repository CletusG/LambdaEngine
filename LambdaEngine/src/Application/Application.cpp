#include "Application.h"

namespace Lambda {
       
    Application::Application() {}
    Application::~Application() {}

    void Application::Start() {
        m_IsRunning = true;
    }

    void Application::Update() {
        Start();
        
        while(m_IsRunning) {
            //
        }
    }
}