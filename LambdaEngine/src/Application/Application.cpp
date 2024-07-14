#include "pch.h"
#include "Application.h"

#include "Logging/Logger.h"
#include "OpenGL/Context.h"

namespace Lambda {
    
    Application::Application() {
        Logger::IntlMSG("=======================");
        Logger::IntlMSG("Starting");

        Context::Initialize();
        Logger::IntlMSG("OpenGL Initialized");
    }
    Application::~Application() {}

    void Application::Run() {
        Start();
        Update();
    }

}