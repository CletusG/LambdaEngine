#include "Lambda.h"

using namespace Lambda;

class Demo : public Application {
    public:
        Demo() {};
        ~Demo() {};

        void Start() override {
            Logger::MSG("Starting up");
        }

        void Update() override {}
};

Lambda::Application* Lambda::CreateApplication() {
    return new Demo();
}