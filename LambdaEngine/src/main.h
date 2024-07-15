#pragma once

extern Lambda::lApplication* Lambda::CreatelApplication();

int main(int argc, char** argv) {
    auto app = Lambda::CreatelApplication();
    app->Run();
    delete app;
    
    return 0;
}