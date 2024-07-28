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

        lTexture l_texture("tests/DemoApplication/assets/grass.jpg");

        l2DRenderer l_2DRenderer;

        while (!glfwWindowShouldClose(m_lWindow->GetWindow())) {
            
            if (m_lInputManager->GetKeyPressed(LKEY_ESCAPE)) {
                glfwSetWindowShouldClose(m_lWindow->GetWindow(), true);
            }

            l_2DRenderer.ClearColor();
            
            // Render
            //l_2DRenderer.DrawTriangle();
            // Bind textures before draw command
            l_texture.Bind();

            l_2DRenderer.DrawSquare();
            
            m_lWindow->Run();

            Update();
        }
    }

}