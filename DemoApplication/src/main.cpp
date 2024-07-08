#include "Lambda.h"

using namespace Lambda;

class Demo : public Application {
    public:
        Demo() {};
        ~Demo() {};

        void Start() override {
            Logger::MSG("Starting up");
            Logger::WARN("Sector C science personnel, report to Anomalous Materials test laboratory.");
            Logger::ERROR("Biohazard warning in Sector B and C");
        }

        void Update() override {}
};

Lambda::Application* Lambda::CreateApplication() {
    return new Demo();
}