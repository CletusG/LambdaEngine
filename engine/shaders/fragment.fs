#version 400 core

out vec4 fragcolor;
in vec3 fscolor;
in vec2 fstexcoords;

uniform sampler2D fssampler;

void main()
{
    fragcolor = texture(fssampler, fstexcoords);
}