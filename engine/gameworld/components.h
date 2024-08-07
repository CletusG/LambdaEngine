#ifndef LAMBDA_COMPONENTS_H
#define LAMBDA_COMPONENTS_H

#include "glm/glm.hpp"

// These will need component registers
// which should be maps that include the transform component
// and its corresponding entity id

namespace Lambda {

    struct lTransform {
        lTransform() = default;
        ~lTransform() = default;

        glm::vec3 position;
        glm::vec3 rotation;
        glm::vec3 scale;
    };

    struct lInputController {
        lInputController() = default;
        ~lInputController() = default;
    };
}

#endif