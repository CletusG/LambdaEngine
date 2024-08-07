#include "pch.h"
#include "Shader.h"

#include "tools/Filesystem.h"

#include "glm/gtc/matrix_transform.hpp"
#include "glm/gtc/type_ptr.hpp"

namespace Lambda {

    lShader::~lShader() {
        glDeleteProgram(m_ID);
    }

    void lShader::Use() {
        glUseProgram(m_ID);
    }

    /* The reason this function is called seperate instead of just putting this code in the constructor
    is so I can initialize OpenGL in the correct order inside l2DRenderer*/
    void lShader::Init(const char* vertexShaderFilepath, const char* fragmentShaderFilepath) {  
        
        
        // Create vertex shader
        m_glVertexShader = glCreateShader(GL_VERTEX_SHADER);
        
        // It seems that this conversion somehow corrupts the data in the const char*, 
        // so for now I will leave this as is
        //const char* vstest_char = Filesystem::ReadFile(shaderpath).c_str();
        std::string vs = Filesystem::ReadFile(vertexShaderFilepath);
        const char* vs_char = vs.c_str();

        glShaderSource(m_glVertexShader, 1, &vs_char, NULL);

        glCompileShader(m_glVertexShader);
        
        if (!CompilationErrorCheck(m_glVertexShader)) {
            Logger::IntlError("Failed to load vertex shader!");
            Logger::IntlError(GetErrorLog(m_glVertexShader));
        }


        // Create fragment shader
        m_glFragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
        
        std::string fs = Filesystem::ReadFile(fragmentShaderFilepath);
        const char* fs_char = fs.c_str();
        
        glShaderSource(m_glFragmentShader, 1, &fs_char, NULL);

        glCompileShader(m_glFragmentShader);
        
        if (!CompilationErrorCheck(m_glFragmentShader)) {
            Logger::IntlError("Failed to load fragment shader!");
            Logger::IntlError(GetErrorLog(m_glFragmentShader));
        }


        // Create shader program
        m_ID = glCreateProgram();
        glAttachShader(m_ID, m_glVertexShader);
        glAttachShader(m_ID, m_glFragmentShader);
        glLinkProgram(m_ID);
        // TODO: Error check
        
        // Delete shaders
        glDeleteShader(m_glVertexShader);
        glDeleteShader(m_glFragmentShader);
    }

    void lShader::SetUniform(const char* name, float x, float y, float z) {
        int l_uniformlocation = glGetUniformLocation(m_ID, name);
        Use(); // Required before calling glUniform
        
        glUniform3f(l_uniformlocation, x, y, z);
    }

    void lShader::SetUniform(const char *name, glm::vec3 vec3) {
        int l_uniformlocation = glGetUniformLocation(m_ID, name);
        Use(); // Required before calling glUniform
        
        glUniform3f(l_uniformlocation, vec3.x, vec3.y, vec3.z);
    }

    void lShader::SetUniform(const char *name, float x, float y, float z, float w) {
        int l_uniformlocation = glGetUniformLocation(m_ID, name);
        Use(); // Required before calling glUniform
        
        glUniform4f(l_uniformlocation, x, y, z, w);
    }

    void lShader::SetUniform(const char *name, glm::vec4 vec4) {
        int l_uniformlocation = glGetUniformLocation(m_ID, name);
        Use(); // Required before calling glUniform
        
        glUniform4f(l_uniformlocation, vec4.x, vec4.y, vec4.z, vec4.w);
    }

    void lShader::SetUniform(const char *name, float x) {
        int l_uniformlocation = glGetUniformLocation(m_ID, name);
        Use(); // Required before calling glUniform
        
        glUniform1f(l_uniformlocation, x); 
    }

    void lShader::SetUniform(const char *name, int i) {
        int l_uniformlocation = glGetUniformLocation(m_ID, name);
        Use(); // Required before calling glUniform
        
        glUniform1i(l_uniformlocation, i);
    }

    void lShader::SetUniform(const char *name, glm::mat4 m) {
        int l_uniformlocation = glGetUniformLocation(m_ID, name);
        Use(); // Required before calling glUniform
        
        glUniformMatrix4fv(l_uniformlocation, 1, GL_FALSE, glm::value_ptr(m));
    }

    bool lShader::CompilationErrorCheck(lglShader shader) {
        int l_status;
        glGetShaderiv(shader, GL_COMPILE_STATUS, &l_status);
        
        // If compilation failed
        if (!l_status) {
            return false;   
        }

        return true;
    }

    const char* lShader::GetErrorLog(lglShader shader) {
        char* l_infoLog;
        glGetShaderInfoLog(shader, 512, NULL, l_infoLog);
        
        return l_infoLog;
    }
}