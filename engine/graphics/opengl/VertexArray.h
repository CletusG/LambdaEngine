#ifndef LAMBDA_VERTEXARRAY_H
#define LAMBDA_VERTEXARRAY_H

#include "glObject.h"

namespace Lambda {

    class lVertexArray : public lglObject {
    public:
        lVertexArray();
        ~lVertexArray();

        void Bind();
        void Unbind();
    };
}

#endif