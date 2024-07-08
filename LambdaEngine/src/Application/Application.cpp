#include "Application.h"
#include "Logging/Logger.h"

namespace Lambda {
       
    Application::Application() {
        Logger::IntlMSG("Starting");
        Logger::IntlWARN("Dr. Cross, call 729 please.");
    }
    Application::~Application() {}

    void Application::Run() {
        Start();
        Update();
    }

}