#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>

static GLfloat spin = 0;

void display(void)
{


glClear( GL_COLOR_BUFFER_BIT);
glColor3f(1.0, 0.0, 0.0);

glRectf(-2,1, 2, -1);

glPushMatrix();
glTranslatef(0,0,0.0);
glScalef(5,1,1);
glRectf(-2,1, 2, -1);
glPopMatrix();

glPushMatrix();
glTranslatef(1,-8,0.0);
glRotatef(45,0,0,1);
glScalef(6,1,1);
glRectf(-2,1, 2, -1);
glPopMatrix();


glPushMatrix();
glTranslatef(1.7,-16.5,0.0);
glScalef(5,1,1);
glRectf(-2,1, 2, -1);
glPopMatrix();


 glFlush();


}




int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (500, 500);
	glutInitWindowPosition (100, 100);
	glutCreateWindow ("Line");
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);

	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

