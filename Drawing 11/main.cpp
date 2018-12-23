#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include<bits/stdc++.h>

static GLfloat spin = 0;

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(0.0, 1.0, 0.0);
    glLineWidth(5);
    glBegin(GL_LINES);


		glVertex2d(10,10.1);
		glVertex2d (10,3);

		glVertex2d(9,3);
		glVertex2d (11,3);

		glVertex2d(10,10);
		glVertex2d (9,9);


		glVertex2d(15,10.1);
		glVertex2d (15,3);

		glVertex2d(14,3);
		glVertex2d (16,3);

		glVertex2d(15,10);
		glVertex2d (14,9);




	glEnd();


	glFlush();
}




int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (500, 500);
	glutInitWindowPosition (100, 100);
	glutCreateWindow ("Line");
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glOrtho(-20.0, 20.0, -20.0, 20.0, -1.0, 1.0);

	glutDisplayFunc(display);
	glutMainLoop();




	return 0;
}

