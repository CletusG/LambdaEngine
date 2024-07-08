#pragma once

extern Lambda::Application* Lambda::CreateApplication();

int main(int argc, char** argv)
{
    auto app = Lambda::CreateApplication();
    app->Run();
    delete app;
    
    return 0;
}