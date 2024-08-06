#ifndef LAMBDA_SHADER_H
#define LAMBDA_SHADER_H

#include "glObject.h"
#include "math/vector.h"

namespace Lambda {

    using lglShader = unsigned int;

    // OpenGL Shader program
    class lShader : public lglObject {
    public:
        lShader() {};
        ~lShader();

        void Use();

        void Init(const char* vertexShaderFilepath, const char* fragmentShaderFilepath);

        void SetUniform(const char* name, float x, float y, float z);
        void SetUniform(const char* name, Math::lVec3f vec3);
        void SetUniform(const char* name, float x, float y, float z, float w);
        void SetUniform(const char* name, Math::lVec4f vec4);
        void SetUniform(const char* name, float x);
        void SetUniform(const char* name, int i);

    private:
        bool CompilationErrorCheck(lglShader shader);
        const char* GetErrorLog(lglShader shader);

        lglShader m_glVertexShader, m_glFragmentShader;
    };
}

#endif