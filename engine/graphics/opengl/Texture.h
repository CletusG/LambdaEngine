#ifndef LAMBDA_TEXTURE_H
#define LAMBDA_TEXTURE_H

#include "glObject.h"

namespace Lambda {

    enum lImageType {
        IMG_PNG,
        IMG_JPG
    };

    // Currently only 2D textures
    class lTexture : public lglObject {
    public:
        lTexture(const char* texturepath, lImageType type);
        ~lTexture();

        void Bind();
        void Unbind();
    };
}

#endif