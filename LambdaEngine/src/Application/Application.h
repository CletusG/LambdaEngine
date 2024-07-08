#pragma once

namespace Lambda {
    
    class Application {
        public:
            Application();
            virtual ~Application();

            void Run();

            virtual void Update() = 0;
            virtual void Start() = 0;
        private:    
            bool m_IsRunning = true;
    };

    //Define in client
    Application* CreateApplication();
}