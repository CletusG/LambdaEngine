#ifndef LAMBDA_CLIENT_H
#define LAMBDA_CLIENT_H

// To be included in a client application (in lambda.h)

extern Lambda::lApplication* Lambda::CreatelApplication();

int main(int argc, char** argv) {
    Lambda::lApplication* app = Lambda::CreatelApplication();
    app->Run();
    delete app;
    
    return 0;
}

#endif