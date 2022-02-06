#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

using namespace std;

/****************************CALLBACK FUNCTIONS***************************/

// glfw callbacks -- display glfw errors on console
void error_callback(int error, const char* description){
    fprintf(stderr, "Error: %s\n", description);
}

// close window call back -- destroys window when window
// x is clicked by user
void closeWindow_callback(GLFWwindow* window){
    glfwDestroyWindow(window);
}

// window resize call back -- resizes the openGL rendering window when 
// the user resizes the window
void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    glViewport(0, 0, width, height);
}  
/************************************************************************/

/************************MAIN CODE**************************************/
// OpenGL Vertex Shader
const char *vertexShaderSource = "#version 330 core\n"
    "layout (location = 0) in vec3 aPos;\n"
    "void main()\n"
    "{\n"
    "   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
    "}\0";

// OpenGL Fragment Shader
const char *fragmentShaderSource = "#version 330 core\n"
    "out vec4 FragColor;\n"
    "void main()\n"
    "{\n"
    "   FragColor = vec4(1.0f, 0.5f, 0.2f, 1.0f);\n"
    "}\0";

int main(void){

    // Setup error callbacks to print glfw error 
    // messages to the console
    glfwSetErrorCallback(error_callback);

    // GLFW Initialization
    if (!glfwInit()){ 
        // Initialization Falied
	cout << "GLFW Initialization Failed" << endl;
	glfwTerminate();
	return -1;
    }
    // Force GLFW version 3 and Core Profile
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);


    // Create window and openGL context
    GLFWwindow* window = glfwCreateWindow(640, 480, "Rocket Visualization", NULL, NULL);
    if(!window){
        // Window or OpenGL context failure
    }
    glfwMakeContextCurrent(window); 
    glfwSetWindowCloseCallback(window, closeWindow_callback);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    // Initialize GlAD
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
    cout << "Failed to initialize GLAD" << endl;
    return -1;
    }

    // Set window coordinates
    glViewport(0, 0, 640, 480);

    // Open GL Vertex Shader Compilation
    unsigned int vertexShader;
    vertexShader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
    glCompileShader(vertexShader);
    int success;
    char infoLog[512];
    glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);
    if(!success){
        glGetShaderInfoLog(vertexShader, 512, NULL, infoLog);
	cout << "Error: Vertex Shader Compilation Failed" << endl;
	return -1;
    }

    // OpenGL fragment shader compilation
    unsigned int fragmentShader;
    fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
    glCompileShader(fragmentShader);
    glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &success);
    if(!success){
        glGetShaderInfoLog(fragmentShader, 512, NULL, infoLog);
	cout << "Error: Fragment Shader Compilation Failed" << endl;
	return -1;
    }

    // Create the linked shader program
    unsigned int shaderProgram;
    shaderProgram = glCreateProgram();
    glAttachShader(shaderProgram, vertexShader);
    glAttachShader(shaderProgram, fragmentShader);
    glLinkProgram(shaderProgram);
    glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);
    if(!success){
        glGetProgramInfoLog(shaderProgram, 512, NULL, infoLog);
	cout << "Error: Shader linker failed" << endl;
	return -1;
    }

    // Use shader and delete vertex and fragment shaders
    glUseProgram(shaderProgram);
    glDeleteShader(vertexShader);
    glDeleteShader(fragmentShader);
    unsigned int VAO;
    glGenVertexArrays(1, &VAO);
    unsigned int VBO;
    glGenBuffers(1, &VBO);
    glBindVertexArray(VAO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO);

    // Event Loop
    while(!glfwWindowShouldClose(window)){

	// Background Color
	glClearColor(0.85, 0.9, 0.96, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);

        // User Inputs
	float vertices[] = {
	-0.5, -0.5, 0.0,
	0.5, -0.3, 0.0,
	0.0, 0.5, -0.5 
	};
        glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_DYNAMIC_DRAW);
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
        glEnableVertexAttribArray(0);  

	glUseProgram(shaderProgram);
	glBindVertexArray(VAO);
	glDrawArrays(GL_TRIANGLES, 0, 3);

	// Render
	
	// Update
	glfwSwapBuffers(window);
	glfwPollEvents();
    }

    // GLFW Termination
    glfwTerminate();

    return 0;
}
