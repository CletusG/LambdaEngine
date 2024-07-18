#include "pch.h"
#include "Application.h"

namespace Lambda {
    
    lApplication::lApplication() {
        Logger::IntlMSG("=======================");
        Logger::IntlMSG("Starting");

        m_lWindow = new lWindow("Lambda Window", 800, 600);
        m_lInputManager = new lInputManager(*m_lWindow);
    }
    lApplication::~lApplication() {}

    void lApplication::Run() {
        Start();

        while (!glfwWindowShouldClose(m_lWindow->GetWindow())) {
            m_lWindow->Run();

            if (m_lInputManager->GetKeyPressed(LKEY_ESCAPE)) {
                glfwSetWindowShouldClose(m_lWindow->GetWindow(), true);
            }

            Update();
        }
    }

}