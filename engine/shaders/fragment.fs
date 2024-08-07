#version 400 core

out vec4 fragcolor;
//in vec4 fscolor;
in vec2 fstexcoords;
//in vec4 fscornercolors;

// texture units
uniform sampler2D fstexture1; // set manually when using more than 1
uniform sampler2D fstexture2;

uniform float lerp;

void main()
{
    //fragcolor = texture(fstexture1, fstexcoords) * fscornercolors;
    //vec4 texture1colors = texture(fstexture1, fstexcoords) * fscornercolors;
    fragcolor = mix(
                texture(fstexture1, fstexcoords),
                texture(fstexture2, fstexcoords),
                lerp);
}