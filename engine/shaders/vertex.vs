#version 400 core

// Vector position data
layout (location = 0) in vec3 vpos;
// Vector color data
layout (location = 1) in vec2 vtexcoords;

out vec2 fstexcoords;

void main()
{
    // Shader output, predefined gl_Position
    gl_Position = vec4(vpos.x, vpos.y, vpos.z, 1.0);
    fstexcoords = vtexcoords;
}