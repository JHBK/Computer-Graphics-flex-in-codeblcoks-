#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>

static GLfloat spin = 0;

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

	glRotatef(spin, 0.0, 0.0, 1.0);
	glColor3f(1.0, 1.0, 1.0);


    glBegin(GL_POINTS);

	float x , y , r=20 , d=3/2-r ;
	x=0 ; y= r;
	while(x<=y)
    {

        glVertex3f (x , y, 0.0);
        glVertex3f (y, x, 0.0);
        glVertex3f (-y , x, 0.0);
        glVertex3f (-x , y, 0.0);
        glVertex3f (-x, -y, 0.0);
        glVertex3f (-y, -x, 0.0);
        glVertex3f (y, -x, 0.0);
        glVertex3f (x, -y, 0.0);

        if(d<0)
            d= d+4*x+6 ;
        else{
            d= d+ 4*(x-y)+10;
            y=y-1;
        }
        x=x+1 ;
    }
	glEnd();
	glFlush();
}


void init(void)
{
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
}


int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (250, 250);
	glutInitWindowPosition (100, 100);
	glutCreateWindow ("Circle");
	init();
	glutDisplayFunc(display);

	glutMainLoop();
	return 0;
}

