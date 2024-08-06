#include "pch.h"
#include "Application.h"

#include "renderer/2D/2DRenderer.h"

namespace Lambda {
    
    lApplication::lApplication() {
        Logger::IntlMessage("==========================");
        Logger::IntlMessage("Starting");

        m_lWindow = new lWindow("Lambda Window", 800, 800);
        m_lInputManager = new lInputManager(*m_lWindow); 
    }
    
    lApplication::~lApplication() {
        delete m_lWindow;
        delete m_lInputManager;
    }

    void lApplication::Run() {
        Start();

        l2DRenderer l_2DRenderer;

        float lerp = 0.0f;

        while (!glfwWindowShouldClose(m_lWindow->GetWindow())) {
            
            if (m_lInputManager->GetKeyPressed(LKEY_ESCAPE)) {
                glfwSetWindowShouldClose(m_lWindow->GetWindow(), true);
            }

            l_2DRenderer.ClearColor();

            if (m_lInputManager->GetKeyPressed(LKEY_E)) {
                l_2DRenderer.GetShader()->SetUniform("lerp", lerp += 0.005);
            }
            if (m_lInputManager->GetKeyPressed(LKEY_Q)) {
                l_2DRenderer.GetShader()->SetUniform("lerp", lerp -= 0.005);
            }

            l_2DRenderer.DrawSquare();
            
            m_lWindow->Run();

            Update();
        }
    }

}