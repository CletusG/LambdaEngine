#ifndef LAMBDA_SHADER_H
#define LAMBDA_SHADER_H

#include "glObject.h"

namespace Lambda {

    typedef unsigned int lglShader;

    // OpenGL Shader program
    class lShader : public lglObject {
    public:
        lShader() {};
        ~lShader();

        void Use();

        void Init(const char* vertexShaderFilepath, const char* fragmentShaderFilepath);
    private:
        bool CompilationErrorCheck(lglShader shader);
        const char* GetErrorLog(lglShader shader);

        unsigned int m_glVertexShader, m_glFragmentShader;
    };
}

#endif