#ifndef LAMBDA_COMPONENTS_H
#define LAMBDA_COMPONENTS_H

#include "math/vector.h"

// These will need component registers
// which should be maps that include the transform component
// and its corresponding entity id

namespace Lambda {

    struct lTransform {
        lTransform() = default;
        ~lTransform() = default;

        Math::lVec3f position;
        Math::lVec3f rotation;
        Math::lVec3f scale;
    };

    struct lInputController {
        lInputController() = default;
        ~lInputController() = default;
    };
}

#endif