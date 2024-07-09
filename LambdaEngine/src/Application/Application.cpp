#include "pch.h"
#include "Application.h"
#include "Logging/Logger.h"

namespace Lambda {
    
    Application::Application() {
        Logger::IntlMSG("=======================");
        Logger::IntlMSG("Starting");
    }
    Application::~Application() {}

    void Application::Run() {
        Start();
        Update();
    }

}