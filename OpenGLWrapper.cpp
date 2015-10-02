
#include "OpenGLWrapper.h"
#include <stdlib.h>


GLFWwindow* OpenGLWrapper::window;
unsigned int OpenGLWrapper::width;
unsigned int OpenGLWrapper::height;
char* OpenGLWrapper::title;

void OpenGLWrapper::makePix(int x, int y){
  
}

//initializes library and opens a window
void OpenGLWrapper::init(){
  
  /* Initialize the library */
  if (!glfwInit())
      exit(EXIT_FAILURE);

  /* Create a windowed mode window and its OpenGL context */
  window = glfwCreateWindow(width, height, title, NULL, NULL);
  if (!window)
  {
    glfwTerminate();
    exit(EXIT_FAILURE);
  }

  
  /* Make the window's context current */
  glfwMakeContextCurrent(window);

}

//keep the program alive as long as the window is
void OpenGLWrapper::hold(){
  
  /* Loop until the user closes the window */
  while (!glfwWindowShouldClose(window))
  {
    /* Render here */

    /* Swap front and back buffers */
    glfwSwapBuffers(window);

    /* Poll for and process events */
    glfwPollEvents();
  }
}

//terminate library
void OpenGLWrapper::terminate(){
  
  glfwTerminate();
}
