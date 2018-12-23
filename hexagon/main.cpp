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

    //glBegin(GL_LINES);


		//glVertex2d(10,10);
		//glVertex2d (10,3);


	//glEnd();

    glPushMatrix();
    //glTranslatef(4,0,0);
     //glScalef(2,1,1);

    //glBegin(GL_LINES);
    glBegin(GL_POLYGON);

        glVertex2f(10 , 10);
        glVertex2f(14 , 10);

        glVertex2f(10, 10);
        glVertex2f(7 , 7);

        glVertex2f(14 , 10);
        glVertex2f(16 , 7);

        glVertex2f(7 , 7);
        glVertex2f(10 , 4);

        glVertex2f(16 , 7);
        glVertex2f(14 , 4);

        glVertex2f(10 , 4);
        glVertex2f(14 , 4);



    glEnd();


glTranslatef(-10,0,0);

glBegin(GL_POLYGON);

        glVertex2f(10 , 10);
        glVertex2f(14 , 10);

        glVertex2f(10, 10);
        glVertex2f(7 , 7);

        glVertex2f(14 , 10);
        glVertex2f(16 , 7);

        glVertex2f(7 , 7);
        glVertex2f(10 , 4);

        glVertex2f(16 , 7);
        glVertex2f(14 , 4);

        glVertex2f(10 , 4);
        glVertex2f(14 , 4);



    glEnd();




     glPopMatrix();

     glPushMatrix();
   glScalef(2,-2,1);

glBegin(GL_POLYGON);

        glVertex2f(10 , 10);
        glVertex2f(14 , 10);

        glVertex2f(10, 10);
        glVertex2f(7 , 7);


        glVertex2f(14 , 10);
        glVertex2f(16 , 7);

        glVertex2f(7 , 7);
        glVertex2f(10 , 4);

        glVertex2f(16 , 7);
        glVertex2f(14 , 4);

        glVertex2f(10 , 4);
        glVertex2f(14 , 4);



    glEnd();




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

