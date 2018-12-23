#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include<bits/stdc++.h>
#include<math.h>
#define PI 3.1416


GLfloat cm=0,mm1=0,mm2=35,mm3=-57,moonmove=.8;



void wheel (int x ,int y){

    float th;

    glBegin(GL_LINE_LOOP);

    glColor3f(0.0f, 0.1f, 0.1f);

    for(int i=0;i<360;i++){

    th=i*3,142/180;

    glVertex2f(x+40*cos(th),y+40*sin(th));
}

    glEnd();

}

void circle(GLdouble rad)

{
    GLint points = 50;

    GLdouble delTheta = (2.0 * PI) / (GLdouble)points;

    GLdouble theta = 0.0;

    glBegin(GL_POLYGON);

    glColor3f(1.0f, 1.0f, 1.0f);
    {
        for( int i = 0; i <=50; i++, theta += delTheta )
        {
            glVertex2f(rad * cos(theta),rad * sin(theta));
        }
    }
    glEnd();
}



void circleblack(GLdouble rad)
{
    GLint points = 50;

    GLdouble delTheta = (2.0 * PI) / (GLdouble)points;

    GLdouble theta = 0.0;

    glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.0f, 0.0f);
    {
        for( int i = 0; i <=50; i++, theta += delTheta )
        {
            glVertex2f(rad * cos(theta),rad * sin(theta));
        }
    }
    glEnd();
}

void circlered(GLdouble rad)
{
    GLint points = 50;

    GLdouble delTheta = (2.0 * PI) / (GLdouble)points;

    GLdouble theta = 0.0;

    glBegin(GL_POLYGON);

    glColor3f(0.5f, 0.0f, 0.0f);
    {
        for( int i = 0; i <=50; i++, theta += delTheta )
        {
            glVertex2f(rad * cos(theta),rad * sin(theta));
        }
    }
    glEnd();
}


void draw_pixel(GLint cx, GLint cy)
{

        glBegin(GL_POINTS);
		glVertex2i(cx,cy);
        glEnd();
}

void plotpixels(GLint h,GLint k, GLint x,GLint y)
{
	draw_pixel(x+h,y+k);
	draw_pixel(-x+h,y+k);
	draw_pixel(x+h,-y+k);
	draw_pixel(-x+h,-y+k);
	draw_pixel(y+h,x+k);
	draw_pixel(-y+h,x+k);
	draw_pixel(y+h,-x+k);
	draw_pixel(-y+h,-x+k);
}

void draw_circle(GLint h, GLint k, GLint r)
{
	GLint d=1-r, x=0, y=r;

	while(y>x)
	{
		plotpixels(h,k,x,y);

		if(d<0) d+=2*x+3;
		else
		{
			d+=2*(x-y)+5;
			--y;
		}
		++x;
	}

	plotpixels(h,k,x,y);
}




void car (){

   glBegin(GL_POLYGON);
   //bottom
    glColor3f(0.1f, 0.1f, 0.1f);

    glVertex2f(100,100);
    glVertex2f(100,160);
    glVertex2f(495,160);
    glVertex2f(495,100);

    glEnd();

    glPushMatrix();

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
   //top

    glVertex2f(150,160);
    glVertex2f(200,200);
    glVertex2f(400,200);
    glVertex2f(450,160);
    glEnd();

    glPopMatrix();

    glPushMatrix();

    wheel(200,100);
    wheel(395,100);

    glPopMatrix();


    glPushMatrix();

        glTranslatef(200,105,0.0);
        circle(5);

    glPopMatrix();


    glPushMatrix();

        glTranslatef(395,105,0.0);
        circle(5);

    glPopMatrix();


    glPushMatrix();

    glTranslatef(220,170,0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(20,20, 0,0 );

    glPopMatrix();

    glPushMatrix();

    glTranslatef(260,170,0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(20,20, 0,0 );

    glPopMatrix();

    glPushMatrix();

    glTranslatef(300,170,0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(20,20, 0,0 );

    glPopMatrix();

    glPushMatrix();

    glTranslatef(340,170,0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(20,20, 0,0 );

    glPopMatrix();

    glPushMatrix();

    glTranslatef(380,170,0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(20,20, 0,0 );

    glPopMatrix();

    }


    void carposition(){

    glPushMatrix();

    glTranslatef(-670,-25,0);
    car();

    glPopMatrix();

    }



void grass1()
 {

    glPushMatrix();

    glTranslatef(0,-50,0.0);
    glColor3f(0.0f, 204.0f, 0.0f);
    glRectf(-50,15, 50, 0);

    glPopMatrix();

}

void road()
 {

    glPushMatrix();

    glTranslatef(0,-35,0.0);
    glColor3ub(30,40,50);
    glRectf(-50,30, 50, 0);

    glPopMatrix();

}

void roadstrip()

{

    glPushMatrix();

    glTranslatef(0,-22.5,0.0);
    glColor3f(1.0,1.0,1.0);
    glRectf(-5,2, 0,0 );

    glPopMatrix();

}

void home(){
    //Front wall with window
    glPushMatrix();

    glTranslatef(10,-5,0);
   glColor3f(0.1, 0.2, 0.3);
    //glColor3f(0.1f, 0.0f, 0.0f);//Brown

    glBegin(GL_POLYGON);

    glVertex2f(0,2);
    glVertex2f(30,2);
    glVertex2f(30,30);
    glVertex2f(0,30);

    glEnd();

    glPopMatrix();

    //roof
    glPushMatrix();

    glTranslatef(10,23,0);
    glColor3f(1.0f, 0.5f, 0.0f);//Orange

    glBegin(GL_POLYGON);

    glVertex2f(0,2);
    glVertex2f(30,2);
    glVertex2f(22,19);
    glVertex2f(-10,19);

    glEnd();

    glPopMatrix();

    //Triangle roof
    glPushMatrix();

    glTranslatef(-12,23,0);
    glColor4f(0.4f, 0.0f, 0.0f, 0.0f);//red

    glBegin(GL_TRIANGLES);

    glVertex2f(5,2);
    glVertex2f(22,2);
    glVertex2f(12,19);


    glEnd();

    glPopMatrix();

    // Wall with door

    glPushMatrix();

    glTranslatef(-7,-5,0);
    glColor3f(0.0f, 0.5f, 0.5f);//Blue-Green

    glBegin(GL_POLYGON);

    glVertex2f(0,2);
    glVertex2f(17,2);
    glVertex2f(17,30);
    glVertex2f(0,30);

    glEnd();

    glPopMatrix();

    //Door
    glPushMatrix();

    glTranslatef(-3,-5,0);
    glColor3f(2.0f, 0.5f, 1.0f);//Lilac

    glBegin(GL_POLYGON);

    glVertex2f(0,2);
    glVertex2f(8,2);
    glVertex2f(8,22);
    glVertex2f(0,22);


    glEnd();

    glPopMatrix();


    //Door lock
    glPushMatrix();

    glTranslatef(-1,5,0);
    glColor3f(0.0f, 0.1f, 0.1f);//Dark blue

    glBegin(GL_POLYGON);

    glVertex2f(0,0);
    glVertex2f(1,0);
    glVertex2f(1,2);
    glVertex2f(0,2);


    glEnd();

    glPopMatrix();


    //window right
    glPushMatrix();

    glTranslatef(30,10,0);
    glColor3f(0.2, 0.4, 0.3);

    glBegin(GL_POLYGON);

    glVertex2f(0,0);
    glVertex2f(7,0);
    glVertex2f(7,7);
    glVertex2f(0,7);


    glEnd();

    glPopMatrix();



    //window left
    glPushMatrix();

    glTranslatef(15,10,0);
    glColor3f(0.2, 0.4, 0.3);

    glBegin(GL_POLYGON);

    glVertex2f(0,0);
    glVertex2f(7,0);
    glVertex2f(7,7);
    glVertex2f(0,7);


    glEnd();

    glPopMatrix();



    //line of window left
    glPushMatrix();

    glTranslatef(15,8,0);
    glColor3f(0.1, 0.7, 0.5);


    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2f(0,5);
    glVertex2f(7,5);
    glVertex2f(3.5,9);
    glVertex2f(3.5,2);

    glEnd();

    glPopMatrix();


    //line of window right
    glPushMatrix();

    glTranslatef(30,8,0);
    glColor3f(0.1, 0.7, 0.5);

    glLineWidth(5);

    glBegin(GL_LINES);
    glVertex2f(0,5);
    glVertex2f(7,5);
    glVertex2f(3.5,9);
    glVertex2f(3.5,2);


    glEnd();

    glPopMatrix();



}

void triangle(void)

{
    glColor3f (0.137255,0.556863,0.137255);

    glBegin(GL_POLYGON);


    glVertex3f (0, 0, 0.0);
    glVertex3f (9, 13, 0.0);
    glVertex3f (18, 0, 0.0);

    glEnd();
}

void tree()
{
    glPushMatrix();

    glTranslatef(3,8,0);
    triangle();

    glPopMatrix();

    glPushMatrix();

    glTranslatef(3.5,14,0);
    glScalef(.9,.9,0);
    triangle();

    glPopMatrix();

    glPushMatrix();

    glTranslatef(4.5,20,0);
    glScalef(.8,.8,0);
    triangle();

    glPopMatrix();

    glPushMatrix();

    glTranslatef(7,26,0);
    glScalef(.5,.5,0);
    triangle();

    glPopMatrix();

    //end

    glPushMatrix();

    glScalef(1,3,1);
    glTranslated(0,-5.36,0);
    glBegin(GL_POLYGON);

    glColor3f(0.36,0.25,0.20);
    glVertex3f (10, 4, 0.0);
    glVertex3f (10, 8, 0.0);
    glVertex3f (14, 8, 0.0);
    glVertex3f (14, 4, 0.0);

    glEnd();

    glPopMatrix();

}

void meg()

{


    glPushMatrix();
    glTranslatef(4,5.5,0);
    circle(4);
    glPopMatrix();



    glPushMatrix();
    glTranslatef(-8,5.5,0);
    circle(3.5);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-3.5,9,0);
    circle(3.5);
    glPopMatrix();



    glPushMatrix();
    glTranslatef(1,9,0);
    circle(3);
    glPopMatrix();



    glPushMatrix();
    glTranslatef(-1.5,5.5,0);
    circle(4);
    glPopMatrix();

}

 void moon(){

     glPushMatrix();
    glTranslatef(-1.5,5.5,0);
    circle(4);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(moonmove,5.2,0);
    circleblack(4);
    glPopMatrix();


 }


 void star(){

    //glColor3f(1.0,1.0,1.0);

    glBegin(GL_TRIANGLES);

    glVertex2f(500,543);
    glVertex2f(495,535);
    glVertex2f(505,535);
    glVertex2f(500,532);
    glVertex2f(495,540);
    glVertex2f(505,540);

    glEnd();


 }


 void bushes(){

 for(int l=0;l<=30;l++)

	{
		glColor3f(0.0,0.5,0.0);
		draw_circle(340,400,l);
		draw_circle(380,400,l);
	}

	for(int l=0;l<=25;l++)
	{
		glColor3f(0.0,0.5,0.0);
		draw_circle(350,440,l);
		draw_circle(370,440,l);
	}

	for(int l=0;l<=20;l++)
	{
		glColor3f(0.0,0.5,0.0);
		draw_circle(360,465,l);
	}
 }

 void mountain(){

    glColor3f(0.3f, 0.3f, 0.1);

    glBegin(GL_TRIANGLES);

    glVertex2i(600,500);
    glVertex2i(700,600);
    glVertex2i(800,500);

    glEnd();



    glColor3f(0.3f, 0.3f, 0.1);

    glBegin(GL_TRIANGLES);

        glVertex2i(700,500);
        glVertex2i(900,600);
        glVertex2i(1000,500);

        glEnd();

 }


 void house1(){

    glColor3f(0.5f, 1.0f, 1.0f);//cyan
    glBegin(GL_POLYGON);

    glVertex2d(33,23);
    glVertex2d(44,23);
    glVertex2d(44,30);
    glVertex2d(33,30);

    glEnd();

    //glColor3ub(0,105,105);
    glColor3f(0.5f, 0.5f, 0.5f);//Violet
    glBegin(GL_POLYGON);

    glVertex2d(31,30);
    glVertex2d(46,30);
    glVertex2d(38.5,38);

    glEnd();


    glPushMatrix();

    glTranslatef(37,25,0);
    glColor3f(1.0f, 0.5f, 0.0f);//Orange

    glBegin(GL_POLYGON);

    glVertex2f(0,0);
    glVertex2f(3,0);
    glVertex2f(3,3);
    glVertex2f(0,3);


    glEnd();

    glPopMatrix();



    glPushMatrix();

    glTranslatef(37,23.5,0);
    //glColor3f(0.1, 0.7, 0.5);
    glColor3f(0.0f, 0.0f, 1.0f);//Blue

    glLineWidth(5);

    glBegin(GL_LINES);
    glVertex2f(0,3);
    glVertex2f(3,3);

    glEnd();

    glPopMatrix();

    glPushMatrix();

    glTranslatef(38.5,25,0);
    //glColor3f(0.1, 0.7, 0.5);
     glColor3f(0.0f, 0.0f, 1.0f);//Blue
     glLineWidth(5);
     glBegin(GL_LINES);

    glVertex2f(0,0);
    glVertex2f(0,3);

    glEnd();

    glPopMatrix();




 }


 void house2()
{


    glColor4f(1.0f, 0.0f, 1.0f, 0.0f);//purple
    glBegin(GL_POLYGON);

    glVertex2d(3,14);
    glVertex2d(3,11);
    glVertex2d(10,8);
    glVertex2d(10,12);
    glVertex2d(6,18);

    glEnd();
    //2

    glColor3f(1.0f, 0.5f, 0.0f);//Orange
    glBegin(GL_POLYGON);

    glVertex2d(10,8);
    glVertex2d(10,12);
    glVertex2d(20,12);
    glVertex2d(20,8);

    glEnd();
    //3
    glColor3f(0.0f, 0.1f, 0.0f);//Forest Green
    glBegin(GL_POLYGON);

    glVertex2d(10,12);
    glVertex2d(6,18);
    glVertex2d(17,18);
    glVertex2d(21,12);

    glEnd();
    //4
    glColor3f(0.0f, 0.5f, 0.5f);//Blue-Green
    glBegin(GL_POLYGON);

    glVertex2d(5,11);
    glVertex2d(5,12);
    glVertex2d(8,11);
    glVertex2d(8,10);

    glEnd();
    //5

   glColor3f(0.0f, 0.1f, 0.0f);//Forest Green
    glBegin(GL_POLYGON);

    glVertex2d(14,8);
    glVertex2d(14,10);
    glVertex2d(17,10);
    glVertex2d(17,8);

    glEnd();


}

void treeend(){

    glColor3f(0.9,0.2,0.0);
    glBegin(GL_POLYGON);

    glVertex2f(350,325);
    glVertex2f(350,395);
    glVertex2f(365,395);
    glVertex2f(365,325);

    glEnd();
}

void roadlightstand(){

	glColor3f(0.10,0.10,0.0);
	glBegin(GL_POLYGON);

	glVertex2f(1400,0);
	glColor3f(0.10,0.10,0.0);
	glVertex2f(1425,0);
	glColor3f(0.10,0.10,0.0);
	glVertex2f(1425,250);
	glVertex2f(1400,250);

	glEnd();


}

 void roadkilometer(){

    glPushMatrix();
    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-2,4, 2, 0);
    glPopMatrix();

 }

 void km(){

    glPushMatrix();
    glTranslatef(-10,-10,0);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(0,0);
    glVertex2f(0,20);
	glEnd();

	glPopMatrix();

    glPushMatrix();
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(0,7);
    glVertex2f(0,-8);

    glVertex2f(8,7);
    glVertex2f(0,-1);


    glVertex2f(0,-1);
    glVertex2f(8,-7);

	glEnd();

	glPopMatrix();


    glPushMatrix();
    glTranslatef(12,0,0);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(0,7);
    glVertex2f(0,-8);

    glVertex2f(0,7);
    glVertex2f(6,-3);

    glVertex2f(14,7);
    glVertex2f(14,-8);

    glVertex2f(14,7);
    glVertex2f(6,-3);



	glEnd();

 glPopMatrix();



 }




void display(void)

{

    glClear(GL_COLOR_BUFFER_BIT);

     glPushMatrix();
     grass1();
     glPopMatrix();

     glPushMatrix();
     road();
     glPopMatrix();

    glPushMatrix();
    roadstrip();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-25,0,0.0);
    roadstrip();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(25,0,0.0);
    roadstrip();
    glPopMatrix();

    glPushMatrix();
    //glTranslatef(10,-25,0);

    glTranslatef(cm,-25,0);
    glScalef(.07,.07,1);
    carposition();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-47,-3.3,0);
    glScalef(.5,.5,1);
    home();
    glPopMatrix();

    glPushMatrix();
    glScalef(.3,.3,1);
    glTranslated(-160,-150,0);
    tree();
    glPopMatrix();

    glPushMatrix();
    glScalef(.3,.3,1);
    glTranslated(-148,-150,0);
    tree();
    glPopMatrix();

    glPushMatrix();
    glScalef(.3,.3,1);
    glTranslated(-172,-150,0);
    tree();
    glPopMatrix();


    glPushMatrix();
    glScalef(.5,.5,1);
    //glTranslated(0,65,0);
    glTranslated(mm1,65,0);
    meg();
    glPopMatrix();


    glPushMatrix();
    glScalef(.5,.5,1);
    //glTranslated(35,60,0);
    glTranslated(mm2,60,0);

    meg();
    glPopMatrix();

    glPushMatrix();
    glScalef(.5,.5,1);
    //glTranslated(-57,70,0);
    glTranslated(mm3,70,0);
    meg();
    glPopMatrix();

    glPushMatrix();

    glTranslated(-40,38,0);
    moon();
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslated(-80,-10,0);
    glScalef(.1,.1,1);
    star();
    glPopMatrix();

    glPushMatrix();
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    glTranslated(-90,-20,0);
    glScalef(.1,.1,1);
    star();
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0f, 0.5f, 0.0f);//Orange
    glTranslated(-70,-20,0);
    glScalef(.1,.1,1);
    star();
    glPopMatrix();

    glPushMatrix();
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    glTranslated(-25,-20,0);
    glScalef(.1,.1,1);
    star();
    glPopMatrix();


    glPushMatrix();
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    glTranslated(-10,-20,0);
    glScalef(.1,.1,1);
    star();
    glPopMatrix();


     glPushMatrix();
     glColor3f(1.0,1.0,1.0);
    glTranslated(-18,-14,0);
    glScalef(.1,.1,1);
    star();
    glPopMatrix();


    glPushMatrix();
    glColor3f(1.0f, 0.5f, 0.0f);//Orange
    glTranslated(-50,-10,0);
    glScalef(.1,.1,1);
    star();
    glPopMatrix();


    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslated(-60,-15,0);
    glScalef(.1,.1,1);
    star();
    glPopMatrix();

    glPushMatrix();
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    glTranslated(-42,-20,0);
    glScalef(.1,.1,1);
    star();
    glPopMatrix();




    glPushMatrix();
    glTranslated(0,-85,0);
    glScalef(.1,.1,1);
    bushes();
    glPopMatrix();


    glPushMatrix();
    glTranslated(-14,-85,0);
    glScalef(.1,.1,1);
    bushes();
    glPopMatrix();

    glPushMatrix();
    glTranslated(34,-40,0);

    circlered(.5);
    glPopMatrix();


    glPushMatrix();
    glTranslated(35,-43,0);

    circlered(.5);
    glPopMatrix();


    glPushMatrix();
    glTranslated(38,-43,0);

    circlered(.5);
    glPopMatrix();


     glPushMatrix();
    glTranslated(24,-43,0);
    circlered(.5);
    glPopMatrix();

     glPushMatrix();
    glTranslated(20,-43,0);
    circlered(.5);
    glPopMatrix();


    glPushMatrix();
    glTranslated(23,-39,0);
    circlered(.5);
    glPopMatrix();



    glPushMatrix();
    glTranslated(-90,-80,0);
    glScalef(.15,.15,1);
    mountain();
    glPopMatrix();



    glPushMatrix();
    glTranslatef(-45,-28,0);
    house1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-35,-73,0);
    house1();
    glPopMatrix();

     glPushMatrix();
     glTranslatef(-20,-58,0);
    house2();
    glPopMatrix();

     glPushMatrix();
    glTranslated(-60,-35.5,0);
    glScalef(.1,.1,1);
    bushes();
    glPopMatrix();


     glPushMatrix();
    glTranslated(-60,-37.5,0);
    glScalef(.1,.1,1);
    treeend();
    glPopMatrix();

    glPushMatrix();
    glScalef(.3,.3,1);
    glTranslated(-9,-12.5,0);
    tree();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-30,-35,0);
    glScalef(.05,.05,1);
    roadlightstand();
    glPopMatrix();

     glPushMatrix();
     glTranslatef(40.5,-22,0);
     circle(2.5);
     glPopMatrix();


     glPushMatrix();
     glTranslatef(-75,-35,0);
     glScalef(.05,.05,1);
     roadlightstand();
     glPopMatrix();

     glPushMatrix();
     glTranslatef(-4.5,-22,0);
     circle(2.5);
     glPopMatrix();

    glPushMatrix();
    glTranslatef(-115,-35,0);
    glScalef(.05,.05,1);
    roadlightstand();
    glPopMatrix();

     glPushMatrix();
     glTranslatef(-44.5,-22,0);
     circle(2.5);
     glPopMatrix();

      glPushMatrix();
      glTranslated(30,-35,0);
      roadkilometer();
    glPopMatrix();


    glPushMatrix();
     glScalef(.09,.09,1);
     glTranslated(327,-365,0);
     km();
    glPopMatrix();


	 glFlush();
}

void spinDisplay()
{
    cm = cm + .08;
    mm1 = mm1 + .10;
    mm2 = mm2 + .12;
    mm3 = mm3 + .13;
    moonmove=moonmove+.01;

    if(cm>70)
        cm = -35;

    if(mm1>70){

        mm1=-60;

    }


    if(mm2>80){

        mm2=-80;

    }
     if(mm3>90){

        mm3=-100;

    }


   if(moonmove>6.5){

        moonmove=-5.7;

    }


    glutPostRedisplay();
}
/*

void mouse(int key, int state, int x, int y)
{
    switch (key)
    {
    case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN)
        {
            glutIdleFunc(spinDisplay);
        }
        break;
    case GLUT_MIDDLE_BUTTON:
    case GLUT_RIGHT_BUTTON:
        if (state == GLUT_DOWN)
        {
            glutIdleFunc(NULL);
        }
        break;
    default:
        break;
    }

}
*/
void automove(){

    if (1)

        {
            glutIdleFunc(spinDisplay);
        }

}



int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1350, 690);
	glutInitWindowPosition (0, 0);
	glutCreateWindow ("CITY");
    glClearColor (0, 0.0, 0, 0);
    glOrtho(-50.0,50.0, -50.0, 50.0, -1.0, 1.0);
    automove();
	glutDisplayFunc(display);
//    glutMouseFunc(mouse);
	glutMainLoop();


	return 0;
}

