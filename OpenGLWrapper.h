/* 
 * File:   OpenGLWrapper.h
 * Author: btacklind
 *
 * Created on October 2, 2015, 1:05 AM
 * 
 * This is a class to help use the openGL toolkit and only the functions we
 * need
 */

#ifndef OPENGLWRAPPER_H
#define	OPENGLWRAPPER_H

#include <GLFW/glfw3.h>
class OpenGLWrapper{
public:
    //MUST be run before init() window because there are no default values
    //Will not make changes after init() is run
    static inline void setWindowSize(unsigned int w, unsigned int h)
        {width = w; height = h;};
    static inline void setWindowTitle(char* t){title = t;};
    
    //initialize the window
    static void init();
    static void hold();
    static void terminate();
    
    //TODO
    //draw a pixel on screen
    static void makePix(int x, int y);

private:
    static GLFWwindow* window;
    static unsigned int width;
    static unsigned int height;
    static char* title;
};


#endif	/* OPENGLWRAPPER_H */

