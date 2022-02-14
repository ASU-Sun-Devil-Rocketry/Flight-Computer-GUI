// ******************************AUTOMATICALLY GENERATED CODE**************************************** 
const char *vertexShaderSource = "# version 330 core\n"
"layout (location = 0) in vec3 aPos;\n"
"void main()\n"
"{\n"
"    gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
"}\n"
"\0";
const char *fragmentShaderSource = "#version 330 core\n"
"    \n"
"out vec4 FragColor;\n"
"void main()\n"
"{\n"
"    // rgb colors\n"
"    float red = 179;\n"
"    float green = 179;\n"
"    float blue = 179;\n"
"    float alpha = 1.0;\n"
"    // convert to normalized paramters\n"
"    float redn = red/255.0;\n"
"    float greenn = green/255.0;\n"
"    float bluen = blue/255.0;\n"
"    // set color output\n"
"    FragColor = vec4(redn, greenn, bluen, alpha);\n"
"}\n"
"\0";
// ************************END OF AUTOMATICALLY GENERATED CODE*************************************** 
