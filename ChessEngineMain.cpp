// #include <Cocoa/Cocoa.h>

// #include <ChessEngine.h>

#include <iostream>
#include <vector>
#include <GLFW/glfw3.h>
#include <glad/glad.h>

using namespace std;

int main()
{
    // initialize GLFW
    glfwInit();
    // glfw window hints determine which version we use
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 4);
    // idk
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    // for mac
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

    GLFWwindow *window = glfwCreateWindow(800, 600, "Chess Engine", NULL, NULL);
    if (window == NULL)
    {
        cout << "Failed to create GLFW window" << endl;
        glfwTerminate();
        return -1;
    }

    // glad handles functions pointers
    // checks whether glad was initialized properly
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }

    // set the viewport
    // glViewport(x, y, width, height)
    // this tell OpenGL the dimensions of the window we are rendering so this is just full screen
    glViewport(0, 0, 800, 600);

    void framebuffer_size_callback(GLFWwindow * window, int width, int height){
        glViewport(0, 0, width, height);
    }
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback); 

    return 0;
}
