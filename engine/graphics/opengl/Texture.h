#ifndef LAMBDA_TEXTURE_H
#define LAMBDA_TEXTURE_H

#include "glObject.h"

namespace Lambda {

    // Currently only 2D textures
    class lTexture : public lglObject {
    public:
        lTexture(const char* texturepath);
        ~lTexture();

        void Bind();
        void Unbind();
    };
}

#endif