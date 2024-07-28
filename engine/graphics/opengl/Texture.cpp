#include "pch.h"
#include "Texture.h"

#define STB_IMAGE_IMPLEMENTATION
#include "thirdparty/stb_image/stb_image.h"

#include "glad/glad.h"
#include "GLFW/glfw3.h"

/* Note: I'm not really sure exactly how I want to implement this class yet,
   this is kind of just a rough draft
*/

namespace Lambda {
    
    lTexture::lTexture(const char* texturepath) {
       glGenTextures(1, &m_ID);

        // Load texture image
        stbi_set_flip_vertically_on_load(true);
        int l_width, l_height, l_colorchannels;
        unsigned char* l_texdata = stbi_load(
            texturepath,
            &l_width,
            &l_height,
            &l_colorchannels,
            0);

        // Necessary for all subsequent calls that reference/modify GL_TEXTURE_2D
        Bind();

        // Wrapping settings
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
        // Filtering settings
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

        if (l_texdata) {
            glTexImage2D(GL_TEXTURE_2D, 
                0,                      // using opengl generated mipmaps
                GL_RGB, 
                l_width, l_height,
                0,
                GL_RGB, GL_UNSIGNED_BYTE,
                l_texdata);
            
            glGenerateMipmap(GL_TEXTURE_2D);
        } else {
            Logger::IntlError("Failed to load texture!");
        }

        // Clean up l_texdata memory
        stbi_image_free(l_texdata);
    }

    lTexture::~lTexture() {

    }

    void lTexture::Bind() {
        glBindTexture(GL_TEXTURE_2D, m_ID);
    }

    void lTexture::Unbind() {
        glBindTexture(GL_TEXTURE_2D, 0);
    }
}