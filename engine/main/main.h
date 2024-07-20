#ifndef LAMBDA_MAIN_H
#define LAMBDA_MAIN_H

extern Lambda::lApplication* Lambda::CreatelApplication();

int main(int argc, char** argv) {
    Lambda::lApplication* app = Lambda::CreatelApplication();
    app->Run();
    delete app;
    
    return 0;
}

#endif