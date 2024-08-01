#include "lambda.h"

using namespace Lambda;

class Demo : public lApplication {
    public:
        Demo() {};
        ~Demo() {};

        void Start() override {
            Logger::Message("Starting up");
            Logger::Warn("Sector C science personnel, report to Anomalous Materials test laboratory.");

            auto& entities = m_Scene1.GetEntityRegister();
            entities.NewEntity("Player"); // m_ID = 0
            entities.NewEntity("Camera"); // m_ID = 1
            entities.NewEntity("Enemy"); // m_ID = 2
            entities.NewEntity("Test Entity"); // m_ID = 3

            entities.DeleteEntity(3); // Valid

            // Print Entities
            for (auto& e : m_Scene1.GetEntityRegister().Get()) {
                Logger::Message("====Entity====");
                Logger::Message(e->m_ID);
                Logger::Message(e->m_Name);
                Logger::Message("==============");
            }
        }

        void Update() override {}
    private:
        lScene m_Scene1;
};

Lambda::lApplication* Lambda::CreatelApplication() {
    return new Demo();
}