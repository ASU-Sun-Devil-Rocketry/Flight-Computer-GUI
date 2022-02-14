#version 330 core
    
out vec4 FragColor;

void main()
{
    // rgb colors
    float red = 16;
    float green = 189;
    float blue = 13;
    float alpha = 1;

    // convert to normalized paramters
    float redn = red/255.0;
    float greenn = green/255.0;
    float bluen = blue/255.0;
    float alphan = alpha/255.0;

    // set color output
    FragColor = vec4(redn, greenn, bluen, alphan);
}

