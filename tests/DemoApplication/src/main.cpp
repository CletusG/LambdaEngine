#include "client/lambda.h"

using namespace Lambda;

class Demo : public lApplication {
    public:
        Demo() {};
        ~Demo() {};

        void Start() override {
            Logger::Message("Starting up");
            Logger::Warn("Sector C science personnel, report to Anomalous Materials test laboratory.");

            auto& entities = m_Scene1.GetEntityRegister();
            entities.NewEntity("Player"); 
            entities.NewEntity("Camera");
            entities.NewEntity("Enemy");
            entities.NewEntity("Test Entity");

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