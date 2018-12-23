
#include <windows.h>

#include <GL/glut.h>

#include <stdlib.h>




void display(void){
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1,0,0);
glBegin(GL_LINES);

    glVertex3f(10,10,0.0);
    glVertex3f(-10,10,0.0);
    glVertex3f(10,10,0.0);
    glVertex3f(10,-10,0.0);
glVertex3f(-10,10,0.0);
glVertex3f(-10,-10,0.0);

glVertex3f(-10,-10,0.0);
glVertex3f(10,-10,0.0);



glEnd();
glFlush();

}

int main(){



    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(250,250);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Line with rotation:");
    glClearColor(0.0,0.0,0.0,0.0);
    glOrtho(-50.0,50.0,-50.0,50.0,-1.0,1.0);
    glutDisplayFunc(display);

    glutMainLoop();









}
