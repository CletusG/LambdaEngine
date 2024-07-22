#ifndef LAMBDA_VERTEXARRAY_H
#define LAMBDA_VERTEXARRAY_H

#include "glObject.h"

namespace Lambda {

    class lVertexArray : public lglObject {
    public:
        lVertexArray() {};
        ~lVertexArray();

        /* The generate function is seperate for the sake of code readability/clarity 
        when initializing OpenGL through l2DRenderer (see also lVertexBuffer)*/
        void Generate();

        void Bind();
        void Unbind();
    };
}

#endif