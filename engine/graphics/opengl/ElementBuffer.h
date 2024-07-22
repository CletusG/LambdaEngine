#ifndef LAMBDA_ELEMENTBUFFER_H
#define LAMBDA_ELEMENTBUFFER_H

#include "glObject.h"

namespace Lambda {

    class lElementBuffer : public lglObject {
    public:
        lElementBuffer();
        ~lElementBuffer() {};

        void Bind();
        void Unbind();
        // Make this function take input
        void CopyData();
    private:

        // Demo square indices
        unsigned int m_SquareIndices[6] = {
            0, 1, 3,
            1, 2, 3
        };
    };
}


#endif