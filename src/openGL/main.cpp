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

    while(!glfwWindowShouldClose(window)){
        // User Inputs
	
	// Render
	glClearColor(0.85, 0.9, 0.96, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	
	// Update
	glfwSwapBuffers(window);
	glfwPollEvents();
    }

    // GLFW Termination
    glfwTerminate();

    return 0;
}
