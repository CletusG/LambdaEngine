#include "Application.h"
#include "Logging/Logging.h"

namespace Lambda {
       
    Application::Application() {
        Logger::IntlMSG("Starting Up");
    }
    Application::~Application() {}

    void Application::Run() {
        Start();
        Update();
    }
}