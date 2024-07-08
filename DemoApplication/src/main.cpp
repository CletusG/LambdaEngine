#include "Lambda.h"

using namespace Lambda;

class Demo : public Application {
    public:
        Demo() {};
        ~Demo() {};
};

Lambda::Application* Lambda::CreateApplication() {
    return new Demo();
}