#ifndef LAMBDA_SHADER_H
#define LAMBDA_SHADER_H

#include "glObject.h"
#include "glm/glm.hpp"

namespace Lambda {

    using lglShader = unsigned int;

    // OpenGL Shader program
    class lShader : public lglObject {
    public:
        lShader() {};
        ~lShader();

        void Use();

        void Init(const char* vertexShaderFilepath, const char* fragmentShaderFilepath);

        // Might need a better way to organize this
        void SetUniform(const char* name, float x, float y, float z);
        void SetUniform(const char* name, glm::vec3 vec3);
        void SetUniform(const char* name, float x, float y, float z, float w);
        void SetUniform(const char* name, glm::vec4 vec4);
        void SetUniform(const char* name, float x);
        void SetUniform(const char* name, int i);
        void SetUniform(const char* name, glm::mat4 m);

    private:
        bool CompilationErrorCheck(lglShader shader);
        const char* GetErrorLog(lglShader shader);

        lglShader m_glVertexShader, m_glFragmentShader;
    };
}

#endif