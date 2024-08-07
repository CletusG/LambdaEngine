#include "pch.h"
#include "Application.h"

#include "renderer/2D/2DRenderer.h"

#include "glm/gtc/matrix_transform.hpp"

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

            // Set transform
            glm::mat4 transform = glm::mat4(1.0f); // identity matrix
            // Angle 90 degrees
            transform = glm::scale(transform, glm::vec3(0.5, 0.5, 0.5));
            transform = glm::rotate(transform, (float)glfwGetTime(), glm::vec3(0.0, 0.0, 1.0));
            l_2DRenderer.GetShader()->SetUniform("transform", transform);

            l_2DRenderer.GetShader()->SetUniform("lerp", (float)sin(glfwGetTime()));

            //Logger::IntlMessage((float)glfwGetTime());

            l_2DRenderer.DrawSquare();
            
            m_lWindow->Run();

            Update();
        }
    }

}