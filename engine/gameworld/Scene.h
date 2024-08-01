#ifndef LAMBDA_SCENE_H
#define LAMBDA_SCENE_H

#include "EntityRegister.h"
#include "components.h"

namespace Lambda {

    class lScene {
    public:
        // This is going to need a copy constructor
        lScene() = default;
        ~lScene() = default;

        lEntityRegister& GetEntityRegister() { return m_EntityRegister; }
    private:        
        lEntityRegister m_EntityRegister;

        // Component registers will be here also
    };
}

#endif