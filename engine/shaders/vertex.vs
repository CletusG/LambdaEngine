#version 400 core

// position data
layout (location = 0) in vec3 vpos;
// texture data
layout (location = 1) in vec2 vtexcoords;
// color data
layout (location = 2) in vec3 vcornercolors; 

out vec2 fstexcoords;
//out vec4 fscolor;
//out vec4 fscornercolors;

uniform mat4 transform;

void main()
{
    // Shader output, predefined gl_Position
    gl_Position = vec4(vpos, 1.0) * transform;
    fstexcoords = vtexcoords;
    //fscolor = vec4(1.0f, 0.0f, 0.0f, 1.0f);
    //fscornercolors = vec4(vcornercolors, 1.0f);
}