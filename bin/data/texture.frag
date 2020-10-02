#version 410

uniform sampler2D parrotTex;
uniform float brightness;

in vec2 fragUV;
out vec4 outCol;

void main()
{
    outCol = texture(parrotTex, fragUV) * vec4(1.0f, brightness, 0.0f, 1.0f);
}
