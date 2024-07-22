#include "pch.h"
#include "Application.h"

#include "renderer/2D/2DRenderer.h"

namespace Lambda {
    
    lApplication::lApplication() {
        Logger::IntlMSG("=======================");
        Logger::IntlMSG("Starting");
        
        m_lWindow = new lWindow("Lambda Window", 800, 600);
        m_lInputManager = new lInputManager(*m_lWindow); 
    }
    
    lApplication::~lApplication() {
        delete m_lWindow;
        delete m_lInputManager;
    }

    void lApplication::Run() {
        Start();

        l2DRenderer l_2DRenderer;

        while (!glfwWindowShouldClose(m_lWindow->GetWindow())) {
            
            if (m_lInputManager->GetKeyPressed(LKEY_ESCAPE)) {
                glfwSetWindowShouldClose(m_lWindow->GetWindow(), true);
            }

            l_2DRenderer.ClearColor();
            // Render
            l_2DRenderer.DrawTriangle();

            m_lWindow->Run();

            Update();
        }
    }

}