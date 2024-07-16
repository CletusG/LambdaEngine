#include "Lambda.h"

using namespace Lambda;

class Demo : public lApplication {
    public:
        Demo() {};
        ~Demo() {};

        void Start() override {
            Logger::MSG("Starting up");
            Logger::WARN("Sector C science personnel, report to Anomalous Materials test laboratory.");
        }

        void Update() override {}
};

Lambda::lApplication* Lambda::CreatelApplication() {
    return new Demo();
}