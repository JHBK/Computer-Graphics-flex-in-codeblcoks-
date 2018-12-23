#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>

static GLfloat spin = 0;

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);


     glPushMatrix();
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
	glPopMatrix();


glPushMatrix();
	glRotatef(spin, 0.0, 0.0, 1.0);
	glColor3f(1.0, 0.0, 1.0);


    glBegin(GL_POINTS);

	float x1 , y1 , r1=10 , d1=3/2-r1 ;
	x1=0 ; y1= r1;
	while(x1<=y1)
    {

        glVertex3f (x1 , y1, 0.0);
        glVertex3f (y1, x1, 0.0);
        glVertex3f (-y1 , x1, 0.0);
        glVertex3f (-x1 , y1, 0.0);
        glVertex3f (-x1, -y1, 0.0);
        glVertex3f (-y1, -x1, 0.0);
        glVertex3f (y1, -x1, 0.0);
        glVertex3f (x1, -y1, 0.0);

        if(d1<0)
            d1= d1+4*x1+6 ;
        else{
            d1= d1+ 4*(x1-y1)+10;
            y1=y1-1;
        }
        x1=x1+1 ;
    }
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glRotatef(spin, 0.0, 0.0, 1.0);
	glColor3f(0.0, 1.0, 1.0);


    glBegin(GL_POINTS);

	float x2 , y2 , r2=3 , d2=3/2-r2 ;
	x2=0 ; y2= r2;
	while(x2<=y2)
    {

        glVertex3f (x2 , y2, 0.0);
        glVertex3f (y2, x2, 0.0);
        glVertex3f (-y2 , x2, 0.0);
        glVertex3f (-x2 , y2, 0.0);
        glVertex3f (-x2, -y2, 0.0);
        glVertex3f (-y2, -x2, 0.0);
        glVertex3f (y2, -x2, 0.0);
        glVertex3f (x2, -y2, 0.0);

        if(d2<0)
            d2= d2+4*x2+6 ;
        else{
            d2= d2+ 4*(x2-y2)+10;
            y2=y2-1;
        }
        x2=x2+1 ;
    }
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glRotatef(spin, 0.0, 0.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);


    glBegin(GL_POINTS);

	float x3 , y3 , r3=30 , d3=3/2-r3 ;
	x3=0 ; y3= r3;
	while(x3<=y3)
    {

        glVertex3f (x3 , y3, 0.0);
        glVertex3f (y3, x3, 0.0);
        glVertex3f (-y3 , x3, 0.0);
        glVertex3f (-x3 , y3, 0.0);
        glVertex3f (-x3, -y3, 0.0);
        glVertex3f (-y3, -x3, 0.0);
        glVertex3f (y3, -x3, 0.0);
        glVertex3f (x3, -y3, 0.0);

        if(d3<0)
            d3= d3+4*x3+6 ;
        else{
            d3= d3+ 4*(x3-y3)+10;
            y3=y3-1;
        }
        x3=x3+1 ;
    }
	glEnd();

	glPopMatrix();


	glPushMatrix();
	glRotatef(spin, 0.0, 0.0, 1.0);
	glColor3f(1.0, 0.5, 0.0);
glTranslatef(1,10,0.0);

    glBegin(GL_POINTS);


	float x4 , y4 , r4=2 , d4=3/2-r4 ;
	x4=0 ; y4= r4;
	while(x4<=y4)
    {

        glVertex3f (x4 , y4, 0.0);
        glVertex3f (y4, x4, 0.0);
        glVertex3f (-y4 , x4, 0.0);
        glVertex3f (-x4 , y4, 0.0);
        glVertex3f (-x4, -y4, 0.0);
        glVertex3f (-y4, -x4, 0.0);
        glVertex3f (y4, -x4, 0.0);
        glVertex3f (x4, -y4, 0.0);

        if(d4<0)
            d4= d4+4*x4+6 ;
        else{
            d4= d4+ 4*(x4-y4)+10;
            y4=y4-1;
        }
        x4=x4+1 ;
    }
	glEnd();
	glPopMatrix();


	glPopMatrix();


	glPushMatrix();
	glRotatef(spin, 0.0, 0.0, 1.0);
	glColor3f(1.0, 0.5, 0.0);
glTranslatef(1,-10,0.0);

    glBegin(GL_POINTS);


	float x5 , y5 , r5=2 , d5=3/2-r5 ;
	x4=0 ; y5= r5;
	while(x5<=y5)
    {

        glVertex3f (x5 , y5, 0.0);
        glVertex3f (y5, x5, 0.0);
        glVertex3f (-y5 , x5, 0.0);
        glVertex3f (-x5 , y5, 0.0);
        glVertex3f (-x5, -y5, 0.0);
        glVertex3f (-y5, -x5, 0.0);
        glVertex3f (y5, -x5, 0.0);
        glVertex3f (x5, -y5, 0.0);

        if(d5<0)
            d5= d5+4*x5+6 ;
        else{
            d5= d5+ 4*(x5-y5)+10;
            y5=y5-1;
        }
        x5=x5+1 ;
    }
	glEnd();
	glPopMatrix();



	glPushMatrix();
	glRotatef(spin, 0.0, 0.0, 1.0);
	glColor3f(1.0, 0.5, 0.0);
glTranslatef(1,30,0.0);

    glBegin(GL_POINTS);


	float x6 , y6 , r6=2 , d6=3/2-r6 ;
	x6=0 ; y6= r6;
	while(x6<=y6)
    {

        glVertex3f (x6 , y6, 0.0);
        glVertex3f (y6, x6, 0.0);
        glVertex3f (-y6 , x6, 0.0);
        glVertex3f (-x6 , y6, 0.0);
        glVertex3f (-x6, -y6, 0.0);
        glVertex3f (-y6, -x6, 0.0);
        glVertex3f (y6, -x6, 0.0);
        glVertex3f (x6, -y6, 0.0);

        if(d6<0)
            d6= d6+4*x6+6 ;
        else{
            d6= d6+ 4*(x6-y6)+10;
            y6=y6-1;
        }
        x6=x6+1 ;
    }
	glEnd();
	glPopMatrix();



	glPushMatrix();
	glRotatef(spin, 0.0, 0.0, 1.0);
	glColor3f(1.0, 0.5, 0.0);
glTranslatef(2,-30,0.0);

    glBegin(GL_POINTS);


	float x7 , y7 , r7=2 , d7=3/2-r7 ;
	x7=0 ; y7= r7;
	while(x7<=y7)
    {

        glVertex3f (x7 , y7, 0.0);
        glVertex3f (y7, x7, 0.0);
        glVertex3f (-y7 , x7, 0.0);
        glVertex3f (-x7 , y7, 0.0);
        glVertex3f (-x7, -y7, 0.0);
        glVertex3f (-y7, -x7, 0.0);
        glVertex3f (y7, -x7, 0.0);
        glVertex3f (x7, -y7, 0.0);

        if(d7<0)
            d7= d7+4*x7+6 ;
        else{
            d7= d7+ 4*(x7-y7)+10;
            y7=y7-1;
        }
        x7=x7+1 ;
    }
	glEnd();
	glPopMatrix();


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

