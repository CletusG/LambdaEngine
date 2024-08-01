#ifndef LAMBDA_VECTOR_H
#define LAMBDA_VECTOR_H

namespace Lambda {

    namespace Math {
        
        struct lVec3f {
            lVec3f() = default;
            lVec3f(float xx, float yy, float zz)
                : x(xx), y(yy), z(zz) {};
            
            float x,y,z;
        };

        struct lVec4f {
            lVec4f() = default;
            lVec4f(float xx, float yy, float zz, float ww)
                : x(xx), y(yy), z(zz), w(ww) {};
            float x,y,z,w;
        };

    }
}

#endif