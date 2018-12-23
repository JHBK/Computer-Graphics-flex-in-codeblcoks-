#include <windows.h>
#include <GL/glut.h>
#include <Math.h>
#define PI 3.14159265f
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

char title[] = "Solar System";
int windowWidth  = 640;
int windowHeight = 480;
int windowPosX   = 50;
int windowPosY   = 50;


// Global variables *********
float posX=0.0;
float posY=0.0;
GLfloat RocketX=0.0f;
GLfloat RocketY=0.0f;
float rot=0.0f;
int refreshmilli =30.0;
int x=0.0, y=0.0;
float counter=0.200;
GLfloat angle= 0.0f;

bool fullScreenMode = true;

GLfloat starX, starY;
GLint starNum = 0;
typedef GLfloat star2[15000];
star2 randomX = {};
star2 randomY = {};
star2 randomZ = {};

//********

void initGL(){

glClearColor(0.001,0.001,0.001,0.001);



}
//*********


//Draw Stars*************

void stars(GLfloat x, GLfloat y){
    float r = (rand()%2)/1;
      float g = (rand()%2)/1;
      float b = (rand()%2)/1;
    glPointSize(1.3);
   glBegin(GL_POINTS);
   glColor3f(1.0, 0.8, 1.0);
   glVertex2f(x,y);
   glEnd();
}

//Draw random Stars************
void Mystars(){

if (starNum < 8000){
        /* This will store 100 stars' location to a data array. */
        for (starNum = 0; starNum < 8000; starNum++) {


        starX = -4.0 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / 10.0));
        starY = -4.0 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / 10.0));


        randomX[starNum] = { starX };
        randomY[starNum] = { starY };


        }
    }
    else{
        /* This will draw 100 stars on the screen */
        for (int i = 0; i < starNum; i++){
            glPushMatrix();
            stars(randomX[i-1],randomY[i]);
            glPopMatrix();
        }
    }

}

//***Draw Solar***
void Solar(){


 glLoadIdentity();

//glTranslatef(angle,-0.3,0.5);
//*******Mercury******
     glPushMatrix();
        glRotatef(angle*0.7, 3.8f, -2.8f, 20.0f);
        glTranslatef(-0.18,0.1,0.0);
        glColor3f(0.3f,0.79f,1.0f);
        glutSolidSphere(0.01,60,30);
    glPopMatrix();
//*********Venus**********
    glPushMatrix();
        glRotatef(angle*0.6, 3.8f, -2.8f, 20.0f);
        glTranslatef(-0.28,0.1,0.0);
        glColor3f(0.55f,0.49f,0.51f);
        glutSolidSphere(0.012,60,30);
    glPopMatrix();



//Earth
glPushMatrix();
      glLoadIdentity();
        glRotatef(angle*0.5, 5.0f, 3.0f, 10.0f);
        glTranslatef(-0.55,0.2,0.0);
        glColor3f(0.0,0.5,0.709);
        glutSolidSphere(0.018,60,30);
 //*******Moon*********
        glRotatef(angle*0.2, -0.05f, -0.1f, 0.05f);
        glTranslatef(-0.05,0.0,0.1);
        glColor3f(0.96,0.95,0.81);
        glutSolidSphere(0.009,60,30);
glPopMatrix();

//*********Mars*******
 glPushMatrix();
    glLoadIdentity();
    glColor3f(0.45,0.09,0.19);
    glRotatef(angle*0.3, -0.3f, -0.2f, 0.6f);
    glTranslatef(-0.83,-0.5,-0.04);
    glutSolidSphere(0.023,60,30);
glPopMatrix();
//******Jupiter*******
glPushMatrix();
    glLoadIdentity();
    glColor3f(0.71,0.36,0.24);
    glRotatef(angle*0.2, -0.3f, -0.3f, 1.6f);
    glTranslatef(-0.93,-0.6,-0.04);
    glutSolidSphere(0.025,60,30);
glPopMatrix();

//for rotate**********
angle +=0.9f;
if(angle>10000)
   angle=-1.0f;


}
//*******


//**** Draw Sun *********

void Sun(){
 float r = (rand()%2)/1;
      float g = (rand()%2)/1;
      float b = (rand()%2)/1;
glLoadIdentity();
rot -=3.5f;
if(rot>10000)
  rot=+1.0f;
// ball();

glPushMatrix();
glColor3f(1.0,0.37,0.07);
        glTranslated(0.0,0.0,0.0);
        glRotated(20,1,0,0);
        glRotated(rot*0.21,1.0,0.0,0.5);
       // glColor3f(r,g,b);
        glutSolidSphere(0.08,20,10);
    glPopMatrix();




}
//******Draw rocket **********
void Rocket(){

glLoadIdentity();

 glTranslated(0.6,y+counter,0.0);
glLineWidth(5.0);

glBegin(GL_LINES);
glColor3f(1.0,0.0,0.0);
    glVertex2f(-0.02f,0.179f);
    glVertex2f(-0.02f,0.23f);
    glVertex2f(0.02f,0.179f);
    glVertex2f(0.02f,0.23f);

glEnd();

glBegin(GL_QUADS);

glColor3f(0.9,1.5,0.2);
    glVertex2f(-0.0009f,0.3f);
    glColor3f(0.0,1.1,1.1);
    glVertex2f(0.041f,0.19f);
    glColor3f(0.7,0.1,0.1);
    glVertex2f(0.041f, 0.17f);
    glColor3f(1.0,0.0,0.1);
    glVertex2f(-0.0019f,0.20f);
//*******
glColor3f(0.9,1.5,0.2);
    glVertex2f(-0.0009f,0.3f);
    glColor3f(0.0,1.1,1.1);
    glVertex2f(-0.041f,0.192f);
    glColor3f(0.7,0.1,0.1);
    glVertex2f(-0.041f, 0.17f);
    glColor3f(1.0,0.0,0.1);
    glVertex2f(-0.0019f,0.20f);
glEnd();


}

void Rocketright(){

 glTranslated(RocketX+0.5,y+counter,0.0);
glutPostRedisplay();
}
void Rocketleft(){

 glTranslated(RocketX-0.5,y+counter,0.0);
glutPostRedisplay();
}

//draw string**************
void drawBitmapText(char *string,float x,float y,float z)
{
   // char *string ="Hello";
	char *c;
	glRasterPos3f(-0.9, 0.9,0);

	for (c=string; *c != '\0'; c++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
	}
}

void bit(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	glLoadIdentity();

	drawBitmapText("Solar System",200,200,0);
glPopMatrix();
}

//***********


//** Call back************
void display(){
 glClear(GL_COLOR_BUFFER_BIT);
 glMatrixMode(GL_MODELVIEW);
bit();

    Mystars();
    Solar();
    Sun();
    Rocket();

 counter +=0.001f;
 if(counter>1){
    counter=-1.3f;

 }

 glutSwapBuffers();

}

//**Timer *****
void timer(int value){
glutPostRedisplay();
    glutTimerFunc(refreshmilli,timer,0);



}
void Idle(){
glutPostRedisplay();
}
void ReSizeGLScene(int Width, int Height)
{
  if (Height==0)
    Height=1;

  glViewport(0, 0, Width, Height);

  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();

  gluPerspective(45.0f,(GLfloat)Width/(GLfloat)Height,0.1f,100.0f);
  glMatrixMode(GL_MODELVIEW);
}

void keyboard(unsigned char key, int x, int y) {
   switch (key) {
      case 27:     // ESC key
         exit(0);
         break;
   }
   if(key=='S'){
       glutIdleFunc(Rocketright);
   }
   if(key=='A'){
    glutIdleFunc(Rocketleft);
    }

    glutPostRedisplay();
}

/* Callback handler for special-key event */
void specialKeys(int key, int x, int y) {
   switch (key) {
      case GLUT_KEY_F1:
         fullScreenMode = !fullScreenMode;
         if (fullScreenMode) {
            windowPosX   = glutGet(GLUT_WINDOW_X);
            windowPosY   = glutGet(GLUT_WINDOW_Y);
            windowWidth  = glutGet(GLUT_WINDOW_WIDTH);
            windowHeight = glutGet(GLUT_WINDOW_HEIGHT);
            glutFullScreen();
         } else {
            glutReshapeWindow(windowWidth, windowHeight);
            glutPositionWindow(windowPosX, windowPosY );
         }
         break;

   }
}


int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_DOUBLE);
   glutInitWindowSize(windowWidth, windowHeight);
   glutInitWindowPosition(windowPosX, windowPosY);
   glutCreateWindow(title);
   glutDisplayFunc(display);
   glutTimerFunc(0, timer, 0);
   glutSpecialFunc(specialKeys);
   glutKeyboardFunc(keyboard);
   glutFullScreen();
   initGL();
   glutMainLoop();
   return 0;
}
