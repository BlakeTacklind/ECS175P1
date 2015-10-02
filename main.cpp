/* 
 * File:   main.cpp
 * Author: btacklind
 *
 * Created on October 1, 2015, 11:44 PM
 */

// Include standard headers
#include <stdio.h>
#include <stdlib.h>

#include "OpenGLWrapper.h"

int main(int argc, char** argv)
{
  OpenGLWrapper::setWindowTitle("Blake Tacklind - ECS 175 - Project 1");
  OpenGLWrapper::setWindowSize(600, 480);
  
  OpenGLWrapper::init();
  
  OpenGLWrapper::hold();

  OpenGLWrapper::terminate();
  return 0;
}
