#pragma once

namespace Lambda {
    
    class Application {
        public:
            Application();
            virtual ~Application();

            void Update();
        private:
            void Start();
            
            bool m_IsRunning = false;
    };

    //Define in client
    Application* CreateApplication();
}