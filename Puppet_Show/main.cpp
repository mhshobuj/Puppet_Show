#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <math.h>

static float	tx	=  0.0;
static float	tx1	=  0.0;
static float    m= 0.0;
static float    f= 0.0;
static float	ty	=  0.0;
static float	ty1	=  0.0;

boolean mov= false;
boolean mov1= false;
boolean mov2= false;

void init()
{
    glClearColor(0.0f,0.0f,0.0f,1.0f);
    glOrtho(-50,50,-36,36,-50,50);
}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
//SEAT BACK
    glColor3f(0.933f, 0.604f, 0.286f);
    glBegin(GL_QUADS);
        glVertex3d(-50.0,-23.0,0.0);
        glVertex3d(50.0,-23.0,0.0);
        glVertex3d(50.0,-50.0,0.0);
        glVertex3f(-50.0,-50.0,0.0);
    glEnd();

//SEAT UPPER BACK
    glColor3f(1.0f,0.725f,0.059f);
    glBegin(GL_QUADS);
        glVertex3d(-50.0,0.0,0.0);
        glVertex3d(50.0,0.0,0.0);
        glVertex3d(50.0,-23.0,0.0);
        glVertex3f(-50.0,-23.0,0.0);
    glEnd();
//SEAT UPPER BACK LINES
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(-50.0,-21.0,0.0);
        glVertex3d(50.0,-21.0,0.0);
    glEnd();

    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(-50.0,-19.0,0.0);
        glVertex3d(50.0,-19.0,0.0);
    glEnd();

    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(-50.0,-17.0,0.0);
        glVertex3d(50.0,-17.0,0.0);
    glEnd();

    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(-50.0,-15.0,0.0);
        glVertex3d(50.0,-15.0,0.0);
    glEnd();

    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(-50.0,-12.8,0.0);
        glVertex3d(50.0,-12.8,0.0);
    glEnd();

    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(-50.0,-10.7,0.0);
        glVertex3d(50.0,-10.7,0.0);
    glEnd();

    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(-50.0,-8.8,0.0);
        glVertex3d(50.0,-8.8,0.0);
    glEnd();

    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(-50.0,-7.0,0.0);
        glVertex3d(50.0,-7.0,0.0);
    glEnd();

    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(-50.0,-5.5,0.0);
        glVertex3d(50.0,-5.5,0.0);
    glEnd();

    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(-50.0,-4.2,0.0);
        glVertex3d(50.0,-4.2,0.0);
    glEnd();

    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(-50.0,-3.0,0.0);
        glVertex3d(50.0,-3.0,0.0);
    glEnd();

    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(-50.0,-2.1,0.0);
        glVertex3d(50.0,-2.1,0.0);
    glEnd();

    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(-50.0,-1.2,0.0);
        glVertex3d(50.0,-1.2,0.0);
    glEnd();

    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(-50.0,-0.5,0.0);
        glVertex3d(50.0,-0.5,0.0);
    glEnd();
//SEAT BASE
    glColor3f(0.647f,0.165f,0.165f);
    glBegin(GL_QUADS);
        glVertex3d(-50.0,-31.0,0.0);
        glVertex3d(50.0,-31.0,0.0);
        glVertex3d(50.0,-35.0,0.0);
        glVertex3f(-50.0,-35.0,0.0);
    glEnd();
//ALL SEATS
//1
    glColor3f(1.0f,1.0f,0.0f);
    glBegin(GL_QUADS);
        glVertex3d(35.0,-33.0,0.0);
        glVertex3d(47.0,-33.0,0.0);
        glVertex3d(47.0,-35.0,0.0);
        glVertex3f(35.0,-35.0,0.0);
    glEnd();
//Circle
    glColor3f(0.0f,0.f,0.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<180;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(41+2*cos(3.14159*i/180),-33+3*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//Circle_UP
    glColor3f(0.0f,0.f,0.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<180;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(47+2*cos(3.14159*i/180),-31.1+3*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();glColor3f(0.647f,0.165f,0.165f);
    glBegin(GL_QUADS);
        glVertex3d(35.0,36.0,0.0);
        glVertex3d(50.0,36.0,0.0);
        glVertex3d(50.0,-26.0,0.0);
        glVertex3f(35.0,-26.0,0.0);
    glEnd();
//2
    glColor3f(1.0f,1.0f,0.0f);
    glBegin(GL_QUADS);
        glVertex3d(22.0,-33.0,0.0);
        glVertex3d(33.0,-33.0,0.0);
        glVertex3d(33.0,-35.0,0.0);
        glVertex3f(22.0,-35.0,0.0);
    glEnd();
//Circle
    glColor3f(0.0f,0.f,0.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<180;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(27.5+2*cos(3.14159*i/180),-33+3*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//Circle_UP
    glColor3f(0.0f,0.f,0.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<180;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(34+2*cos(3.14159*i/180),-31.1+3*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//3
    glColor3f(1.0f,1.0f,0.0f);
    glBegin(GL_QUADS);
        glVertex3d(8.0,-33.0,0.0);
        glVertex3d(20.0,-33.0,0.0);
        glVertex3d(20.0,-35.0,0.0);
        glVertex3f(8.0,-35.0,0.0);
    glEnd();
//Circle
    glColor3f(0.0f,0.f,0.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<180;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(14+2*cos(3.14159*i/180),-33+3*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//Circle_UP
    glColor3f(0.0f,0.f,0.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<180;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(21+2*cos(3.14159*i/180),-31.1+3*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//4
    glColor3f(1.0f,1.0f,0.0f);
    glBegin(GL_QUADS);
        glVertex3d(-6.0,-33.0,0.0);
        glVertex3d(6.0,-33.0,0.0);
        glVertex3d(6.0,-35.0,0.0);
        glVertex3f(-6.0,-35.0,0.0);
    glEnd();
//Circle
    glColor3f(0.0f,0.f,0.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<180;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(0+2*cos(3.14159*i/180),-33+3*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//Circle_UP
    glColor3f(0.0f,0.f,0.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<180;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(7+2*cos(3.14159*i/180),-31.1+3*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//5
    glColor3f(1.0f,1.0f,0.0f);
    glBegin(GL_QUADS);
        glVertex3d(-20.0,-33.0,0.0);
        glVertex3d(-8.0,-33.0,0.0);
        glVertex3d(-8.0,-35.0,0.0);
        glVertex3f(-20.0,-35.0,0.0);
    glEnd();
//Circle
    glColor3f(0.0f,0.f,0.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<180;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(-13.5+2*cos(3.14159*i/180),-33+3*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//Circle_UP
    glColor3f(0.0f,0.f,0.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<180;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(-7+2*cos(3.14159*i/180),-31.1+3*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//6
    glColor3f(1.0f,1.0f,0.0f);
    glBegin(GL_QUADS);
        glVertex3d(-34.0,-33.0,0.0);
        glVertex3d(-22.0,-33.0,0.0);
        glVertex3d(-22.0,-35.0,0.0);
        glVertex3f(-34.0,-35.0,0.0);
    glEnd();
//Circle
    glColor3f(0.0f,0.f,0.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<180;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(-28+2*cos(3.14159*i/180),-33+3*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//Circle_UP
    glColor3f(0.0f,0.f,0.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<180;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(-21+2*cos(3.14159*i/180),-31.1+3*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//7
    glColor3f(1.0f,1.0f,0.0f);
    glBegin(GL_QUADS);
        glVertex3d(-48.0,-33.0,0.0);
        glVertex3d(-36.0,-33.0,0.0);
        glVertex3d(-36.0,-35.0,0.0);
        glVertex3f(-48.0,-35.0,0.0);
    glEnd();
//Circle
    glColor3f(0.0f,0.f,0.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<180;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(-42+2*cos(3.14159*i/180),-33+3*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//Circle_UP
    glColor3f(0.0f,0.f,0.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<180;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(-35+2*cos(3.14159*i/180),-31.1+3*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//Circle_UP
    glColor3f(0.0f,0.f,0.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<180;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(-48+2*cos(3.14159*i/180),-31.1+3*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//MAIN BACKGROUND
    glColor3f(0.627f,0.125f,0.941f);
    glBegin(GL_QUADS);
        glVertex3d(-50.0,36.0,0.0);
        glVertex3d(50.0,36.0,0.0);
        glVertex3d(50.0,0.0,0.0);
        glVertex3f(-50.0,0.0,0.0);
    glEnd();
//M-PUPPET HEAD
    glColor3f(0.0f,0.0f,0.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(m+10+3*cos(3.14159*i/180),ty+8.5+3.5*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//M-LEFT EYE
    glColor3f(1.0f,1.0f,1.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(m+11+0.8*cos(3.14159*i/180),ty+9.5+0.4*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//M-RIGHT EYE
    glColor3f(1.0f,1.0f,1.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(m+9+0.8*cos(3.14159*i/180),ty+9.5+0.4*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//MALE PUPPET MOUTH
     glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_LINES);
        glVertex3d(m+8.8,ty+7.5,0.0);
        glVertex3d(m+11.2,ty+7.5,0.0);
    glEnd();
//1
    glColor3f(0.0f,0.0f,0.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(m+13.5+2*cos(3.14159*i/180),ty+12.1+2*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//2
    glColor3f(0.0f,0.0f,0.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(m+6.5+2*cos(3.14159*i/180),ty+12+2*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//M-PUPPET NICK
    glColor3f(0.0f,0.0f,0.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(m+10+3*cos(3.14159*i/180),ty+3.5+2*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//M-PUPPET HANDS
//1-LEFT
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
        glVertex3d(m+12.8,ty+4.0,0.0);
        glVertex3d(m+17.0,ty+4.0,0.0);
        glVertex3d(m+17.0,ty+3.0,0.0);
        glVertex3f(m+12.8,ty+3.0,0.0);
    glEnd();
    glColor3f(1.0f,1.0f,1.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(m+18+1.2*cos(3.14159*i/180),ty+3.6+1.2*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
    glEnd();

    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_LINES);
        glVertex3d(m+16.8,ty+4.0,0.0);
        glVertex3d(m+16.8,ty+36.0,0.0);
    glEnd();
//2-RIGHT
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
        glVertex3d(m+2.8,ty+4.0,0.0);
        glVertex3d(m+7.1,ty+4.0,0.0);
        glVertex3d(m+7.1,ty+3.0,0.0);
        glVertex3f(m+2.8,ty+3.0,0.0);
    glEnd();

    glColor3f(1.0f,1.0f,1.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(m+1.8+1.2*cos(3.14159*i/180),ty+3.6+1.2*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
    glEnd();

    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_LINES);
        glVertex3d(m+3.0,ty+4.1,0.0);
        glVertex3d(m+3.0,ty+36.0,0.0);
    glEnd();

//M-PUPPET Circle
    glColor3f(1.0f,0.0f,0.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(m+10+3.7*cos(3.14159*i/180),ty+1+3.5*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
    glColor3f(1.0f,1.0f,1.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(m+8.5+0.8*cos(3.14159*i/180),ty+1.5+1.2*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
    glColor3f(1.0f,1.0f,1.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(m+11.5+0.8*cos(3.14159*i/180),ty+1.5+1.2*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//MALE PUPPET
    glColor3f(1.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
        glVertex3d(m+6.0,ty+0.0,0.0);
        glVertex3d(m+14.0,ty+0.0,0.0);
        glVertex3d(m+14.0,ty-5.0,0.0);
        glVertex3f(m+6.0,ty-5.0,0.0);
    glEnd();
//MALE PUPPET LEGS
//1-LEFT
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
        glVertex3d(m+11.5,ty-5.0,0.0);
        glVertex3d(m+13.0,ty-5.0,0.0);
        glVertex3d(m+13.0,ty-9.0,0.0);
        glVertex3f(m+11.5,ty-9.0,0.0);
    glEnd();

    glColor3f(1.0f,0.0f,0.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(m+14+2.5*cos(3.14159*i/180),ty-9+1*sin(3.14159*i/200)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();

    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_LINES);
        glVertex3d(m+15.0,ty+36.0,0.0);
        glVertex3d(m+15.0,ty-8.2,0.0);
    glEnd();

//2-RIGHT
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
        glVertex3d(m+7.5,ty-5.0,0.0);
        glVertex3d(m+9.0,ty-5.0,0.0);
        glVertex3d(m+9.0,ty-9.0,0.0);
        glVertex3f(m+7.5,ty-9.0,0.0);
    glEnd();

    glColor3f(1.0f,0.0f,0.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(m+6.7+2.5*cos(3.14159*i/190),ty-9+1*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();

    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_LINES);
        glVertex3d(m+5.0,ty+36.0,0.0);
        glVertex3d(m+5.0,ty-8.3,0.0);
    glEnd();

    glutSwapBuffers();
    if(mov1){
			m++;
			Sleep(100);
			if(m== 10)
            {
                m	= 9.0;
            }
    glutPostRedisplay();
    }

    if(mov2){
			ty++;
			Sleep(100);
			if(ty== 7)
            {
                ty	= 6.0;
            }
    glutPostRedisplay();
    }

//FEMALE PUPPET
    glColor3f(1.0f,0.078f,0.576f);
    glBegin(GL_QUADS);
        glVertex3d(f-13.0,ty1+0.0,0.0);
        glVertex3d(f-7.0,ty1+0.0,0.0);
        glVertex3d(f-6.0,ty1-5.0,0.0);
        glVertex3f(f-14.0,ty1-5.0,0.0);
    glEnd();
//F-HEAD
    glColor3f(0.0f,0.0f,0.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(f-9.9+3*cos(3.14159*i/180),ty1+7.5+3.5*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();

//F-LEFT EYE
    glColor3f(1.0f,1.0f,1.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(f-9+0.8*cos(3.14159*i/180),ty1+8.7+0.4*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//F-RIGHT EYE
    glColor3f(1.0f,1.0f,1.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(f-11+0.8*cos(3.14159*i/180),ty1+8.7+0.4*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//F-MOUTH
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
        glVertex3d(f-11.5,ty1+7.0,0.0);
        glVertex3d(f-8.5,ty1+7.0,0.0);
        glVertex3d(f-8.5,ty1+6.5,0.0);
        glVertex3f(f-11.5,ty1+6.5,0.0);
    glEnd();

//F-NICK
    glColor3f(1.0f,1.0f,1.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<180;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(f-10+1.5*cos(3.14159*i/180),ty1+2.8+1.5*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();

//F-PUPPET BODY
    glColor3f(1.0f,0.078f,0.576f);
	glBegin(GL_POLYGON);
        for(int i=1;i<180;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(f-10+3.2*cos(3.14159*i/180),ty1-0.1+3.5*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//1
    glColor3f(1.0f,0.078f,0.576f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(f-8.2+1*cos(3.14159*i/180),ty1+3.5+1*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//2
    glColor3f(1.0f,0.078f,0.576f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(f-11.7+1*cos(3.14159*i/180),ty1+3.6+1*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//F-PUPPET BODY CIRCLE
    glColor3f(1.0f,1.0f,1.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(f-10+0.5*cos(3.14159*i/180),ty1-3.7+0.5*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();

    glColor3f(1.0f,1.0f,1.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(f-7.5+0.5*cos(3.14159*i/180),ty1-3.7+0.5*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();

    glColor3f(1.0f,1.0f,1.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(f-12.5+0.5*cos(3.14159*i/180),ty1-3.7+0.5*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();

    glColor3f(1.0f,1.0f,1.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(f-11.2+0.5*cos(3.14159*i/180),ty1-1.8+0.5*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();

    glColor3f(1.0f,1.0f,1.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(f-8.5+0.5*cos(3.14159*i/180),ty1-1.8+0.5*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//F-HAIR
//1
    glColor3f(1.0f,0.078f,0.576f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(f-7+2*cos(3.14159*i/180),ty1+11.8+2*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//2
    glColor3f(1.0f,0.078f,0.576f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(f-12.9+2*cos(3.14159*i/180),ty1+11.7+2*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();
//F-PUPPET HANDS
//1-LEFT
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
        glVertex3d(f-7.2,ty1+4.0,0.0);
        glVertex3d(f-3.0,ty1+4.0,0.0);
        glVertex3d(f-3.0,ty1+3.0,0.0);
        glVertex3f(f-7.2,ty1+3.0,0.0);
    glEnd();
    glColor3f(1.0f,1.0f,1.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(f-2+1.2*cos(3.14159*i/180),ty1+3.6+1.2*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
    glEnd();

    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_LINES);
        glVertex3d(f-3.0,ty1+36.1,0.0);
        glVertex3d(f-3.0,ty1+4.2,0.0);
    glEnd();
//2-RIGHT
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
        glVertex3d(f-17.0,ty1+4.0,0.0);
        glVertex3d(f-12.6,ty1+4.0,0.0);
        glVertex3d(f-12.6,ty1+3.0,0.0);
        glVertex3f(f-17.0,ty1+3.0,0.0);
    glEnd();
    glColor3f(1.0f,1.0f,1.0f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(f-18+1.2*cos(3.14159*i/180),ty1+3.6+1.2*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
    glEnd();

    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_LINES);
        glVertex3d(f-16.9,ty1+36.0,0.0);
        glVertex3d(f-16.9,ty1+4.2,0.0);
    glEnd();
//FEMALE PUPPET LEGS
//1-LEFT
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
        glVertex3d(f-11.5,ty1-5.0,0.0);
        glVertex3d(f-13.0,ty1-5.0,0.0);
        glVertex3d(f-13.0,ty1-9.0,0.0);
        glVertex3f(f-11.5,ty1-9.0,0.0);
    glEnd();

    glColor3f(1.0f,0.078f,0.576f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(f-13.8+2.5*cos(3.14159*i/200),ty1-9+1*sin(3.14159*i/180)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();

    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_LINES);
        glVertex3d(f-15.0,ty1+36.0,0.0);
        glVertex3d(f-15.0,ty1-8.2,0.0);
    glEnd();
//2-RIGHT
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
        glVertex3d(f-7.5,ty1-5.0,0.0);
        glVertex3d(f-9.0,ty1-5.0,0.0);
        glVertex3d(f-9.0,ty1-9.0,0.0);
        glVertex3f(f-7.5,ty1-9.0,0.0);
    glEnd();

    glColor3f(1.0f,0.078f,0.576f);
	glBegin(GL_POLYGON);
        for(int i=1;i<360;i++)
        {                                                           //// y point=sin main point ; x point=cos main point
            glVertex2f(f-6.7+2.5*cos(3.14159*i/180),ty1-9+1*sin(3.14159*i/200)); //main point + radius
        }                                                           //3.14159*i/180   convert degree to radian
        glEnd();

    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_LINES);
        glVertex3d(f-5.0,ty1+36.0,0.0);
        glVertex3d(f-5.0,ty1-8.3,0.0);
    glEnd();

    glutSwapBuffers();
    if(mov1){
			f--;
			Sleep(100);
			if(f== -10)
            {
                f	= -9.0;
            }
    glutPostRedisplay();
    }

    if(mov2){
			ty1++;
			Sleep(100);
			if(ty1== 7)
            {
                ty1	= 6.0;
            }
    glutPostRedisplay();
    }

//LEFT_CURTAIN
    glColor3f(0.647f,0.165f,0.165f);
    glBegin(GL_QUADS);
        glVertex3d(-50.0,36.0,0.0);
        glVertex3d(tx-0.0,36.0,0.0);
        glVertex3d(tx-0.0,-26.0,0.0);
        glVertex3f(-50.0,-26.0,0.0);
    glEnd();

//LEFT_CURTAIN_LINES
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx-49.0,36.0,0.0);
        glVertex3d(tx-49.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx-47.0,36.0,0.0);
        glVertex3d(tx-47.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx-45.0,36.0,0.0);
        glVertex3d(tx-45.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx-43.0,36.0,0.0);
        glVertex3d(tx-43.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx-41.0,36.0,0.0);
        glVertex3d(tx-41.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx-39.0,36.0,0.0);
        glVertex3d(tx-39.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx-37.0,36.0,0.0);
        glVertex3d(tx-37.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx-35.0,36.0,0.0);
        glVertex3d(tx-35.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx-33.0,36.0,0.0);
        glVertex3d(tx-33.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx-31.0,36.0,0.0);
        glVertex3d(tx-31.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx-29.0,36.0,0.0);
        glVertex3d(tx-29.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx-29.0,36.0,0.0);
        glVertex3d(tx-29.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx-27.0,36.0,0.0);
        glVertex3d(tx-27.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx-25.0,36.0,0.0);
        glVertex3d(tx-25.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx-23.0,36.0,0.0);
        glVertex3d(tx-23.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx-21.0,36.0,0.0);
        glVertex3d(tx-21.0,-26.0,0.0);
    glEnd();
        glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx-19.0,36.0,0.0);
        glVertex3d(tx-19.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx-17.0,36.0,0.0);
        glVertex3d(tx-17.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx-15.0,36.0,0.0);
        glVertex3d(tx-15.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx-13.0,36.0,0.0);
        glVertex3d(tx-13.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx-11.0,36.0,0.0);
        glVertex3d(tx-11.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx-9.0,36.0,0.0);
        glVertex3d(tx-9.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx-7.0,36.0,0.0);
        glVertex3d(tx-7.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx-5.0,36.0,0.0);
        glVertex3d(tx-5.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx-3.0,36.0,0.0);
        glVertex3d(tx-3.0,-26.0,0.0);
    glEnd();
    glBegin(GL_LINES);
        glVertex3d(tx-1.0,36.0,0.0);
        glVertex3d(tx-1.0,-26.0,0.0);
    glEnd();

    glutSwapBuffers();
    if(mov){
			tx--;
			Sleep(150);
			if(tx==-36)
            {
                tx	=-35.0;
            }
    glutPostRedisplay();
    }
//RIGHT_CURTAIN
    glColor3f(0.647f,0.165f,0.165f);
    glBegin(GL_QUADS);
        glVertex3d(tx1+0.0,36.0,0.0);
        glVertex3d(50.0,36.0,0.0);
        glVertex3d(50.0,-26.0,0.0);
        glVertex3f(tx1+0.0,-26.0,0.0);
    glEnd();
//RIGHT_CURTAIN_LINES
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx1+49.0,36.0,0.0);
        glVertex3d(tx1+49.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx1+47.0,36.0,0.0);
        glVertex3d(tx1+47.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx1+45.0,36.0,0.0);
        glVertex3d(tx1+45.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx1+43.0,36.0,0.0);
        glVertex3d(tx1+43.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx1+41.0,36.0,0.0);
        glVertex3d(tx1+41.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx1+39.0,36.0,0.0);
        glVertex3d(tx1+39.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx1+37.0,36.0,0.0);
        glVertex3d(tx1+37.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx1+35.0,36.0,0.0);
        glVertex3d(tx1+35.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx1+33.0,36.0,0.0);
        glVertex3d(tx1+33.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx1+31.0,36.0,0.0);
        glVertex3d(tx1+31.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx1+29.0,36.0,0.0);
        glVertex3d(tx1+29.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx1+29.0,36.0,0.0);
        glVertex3d(tx1+29.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx1+27.0,36.0,0.0);
        glVertex3d(tx1+27.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx1+25.0,36.0,0.0);
        glVertex3d(tx1+25.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx1+23.0,36.0,0.0);
        glVertex3d(tx1+23.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx1+21.0,36.0,0.0);
        glVertex3d(tx1+21.0,-26.0,0.0);
    glEnd();
        glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx1+19.0,36.0,0.0);
        glVertex3d(tx1+19.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx1+17.0,36.0,0.0);
        glVertex3d(tx1+17.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx1+15.0,36.0,0.0);
        glVertex3d(tx1+15.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx1+13.0,36.0,0.0);
        glVertex3d(tx1+13.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx1+11.0,36.0,0.0);
        glVertex3d(tx1+11.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx1+9.0,36.0,0.0);
        glVertex3d(tx1+9.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx1+7.0,36.0,0.0);
        glVertex3d(tx1+7.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx1+5.0,36.0,0.0);
        glVertex3d(tx1+5.0,-26.0,0.0);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex3d(tx1+3.0,36.0,0.0);
        glVertex3d(tx1+3.0,-26.0,0.0);
    glEnd();
    glBegin(GL_LINES);
        glVertex3d(tx1+1.0,36.0,0.0);
        glVertex3d(tx1+1.0,-26.0,0.0);
    glEnd();
    glutSwapBuffers();
    if(mov){
			tx1++;
			Sleep(150);
			if(tx1==36)
            {
                tx1	=35.0;
            }
    glutPostRedisplay();
    }
//ALL UPPER CURTAIN
//1
    glColor3f(1.0f,0.078f,0.576f);
    glBegin(GL_TRIANGLES);
        glVertex3d(40.0,36.0,0.0);
        glVertex3d(50.0,36.0,0.0);
        glVertex3d(45.0,28.0,0.0);
    glEnd();
    glColor3f(0.133f,0.545f,0.133f);
    glBegin(GL_TRIANGLES);
        glVertex3d(42.0,36.0,0.0);
        glVertex3d(48.0,36.0,0.0);
        glVertex3d(45.0,31.0,0.0);
    glEnd();
    glColor3f(0.647f,0.165f,0.165f);
    glBegin(GL_TRIANGLES);
        glVertex3d(44.0,36.0,0.0);
        glVertex3d(46.0,36.0,0.0);
        glVertex3d(45.0,34.0,0.0);
    glEnd();
//2
    glColor3f(1.0f,0.078f,0.576f);
    glBegin(GL_TRIANGLES);
        glVertex3d(30.0,36.0,0.0);
        glVertex3d(40.0,36.0,0.0);
        glVertex3d(35.0,28.0,0.0);
    glEnd();
    glColor3f(0.133f,0.545f,0.133f);
    glBegin(GL_TRIANGLES);
        glVertex3d(32.0,36.0,0.0);
        glVertex3d(38.0,36.0,0.0);
        glVertex3d(35.0,31.0,0.0);
    glEnd();
    glColor3f(0.647f,0.165f,0.165f);
    glBegin(GL_TRIANGLES);
        glVertex3d(34.0,36.0,0.0);
        glVertex3d(36.0,36.0,0.0);
        glVertex3d(35.0,34.0,0.0);
    glEnd();
//3
    glColor3f(1.0f,0.078f,0.576f);
    glBegin(GL_TRIANGLES);
        glVertex3d(20.0,36.0,0.0);
        glVertex3d(30.0,36.0,0.0);
        glVertex3d(25.0,28.0,0.0);
    glEnd();
    glColor3f(0.133f,0.545f,0.133f);
    glBegin(GL_TRIANGLES);
        glVertex3d(22.0,36.0,0.0);
        glVertex3d(28.0,36.0,0.0);
        glVertex3d(25.0,31.0,0.0);
    glEnd();
    glColor3f(0.647f,0.165f,0.165f);
    glBegin(GL_TRIANGLES);
        glVertex3d(24.0,36.0,0.0);
        glVertex3d(26.0,36.0,0.0);
        glVertex3d(25.0,34.0,0.0);
    glEnd();
//4
    glColor3f(1.0f,0.078f,0.576f);
    glBegin(GL_TRIANGLES);
        glVertex3d(10.0,36.0,0.0);
        glVertex3d(20.0,36.0,0.0);
        glVertex3d(15.0,28.0,0.0);
    glEnd();
    glColor3f(0.133f,0.545f,0.133f);
    glBegin(GL_TRIANGLES);
        glVertex3d(12.0,36.0,0.0);
        glVertex3d(18.0,36.0,0.0);
        glVertex3d(15.0,31.0,0.0);
    glEnd();
    glColor3f(0.647f,0.165f,0.165f);
    glBegin(GL_TRIANGLES);
        glVertex3d(14.0,36.0,0.0);
        glVertex3d(16.0,36.0,0.0);
        glVertex3d(15.0,34.0,0.0);
    glEnd();
//5
    glColor3f(1.0f,0.078f,0.576f);
    glBegin(GL_TRIANGLES);
        glVertex3d(0.0,36.0,0.0);
        glVertex3d(10.0,36.0,0.0);
        glVertex3d(5.0,28.0,0.0);
    glEnd();
    glColor3f(0.133f,0.545f,0.133f);
    glBegin(GL_TRIANGLES);
        glVertex3d(2.0,36.0,0.0);
        glVertex3d(8.0,36.0,0.0);
        glVertex3d(5.0,31.0,0.0);
    glEnd();
    glColor3f(0.647f,0.165f,0.165f);
    glBegin(GL_TRIANGLES);
        glVertex3d(4.0,36.0,0.0);
        glVertex3d(6.0,36.0,0.0);
        glVertex3d(5.0,34.0,0.0);
    glEnd();
//6
    glColor3f(1.0f,0.078f,0.576f);
    glBegin(GL_TRIANGLES);
        glVertex3d(0.0,36.0,0.0);
        glVertex3d(-10.0,36.0,0.0);
        glVertex3d(-5.0,28.0,0.0);
    glEnd();
    glColor3f(0.133f,0.545f,0.133f);
    glBegin(GL_TRIANGLES);
        glVertex3d(-2.0,36.0,0.0);
        glVertex3d(-8.0,36.0,0.0);
        glVertex3d(-5.0,31.0,0.0);
    glEnd();
    glColor3f(0.647f,0.165f,0.165f);
    glBegin(GL_TRIANGLES);
        glVertex3d(-4.0,36.0,0.0);
        glVertex3d(-6.0,36.0,0.0);
        glVertex3d(-5.0,34.0,0.0);
    glEnd();
//7
    glColor3f(1.0f,0.078f,0.576f);
    glBegin(GL_TRIANGLES);
        glVertex3d(-10.0,36.0,0.0);
        glVertex3d(-20.0,36.0,0.0);
        glVertex3d(-15.0,28.0,0.0);
    glEnd();
    glColor3f(0.133f,0.545f,0.133f);
    glBegin(GL_TRIANGLES);
        glVertex3d(-12.0,36.0,0.0);
        glVertex3d(-18.0,36.0,0.0);
        glVertex3d(-15.0,31.0,0.0);
    glEnd();
    glColor3f(0.647f,0.165f,0.165f);
    glBegin(GL_TRIANGLES);
        glVertex3d(-14.0,36.0,0.0);
        glVertex3d(-16.0,36.0,0.0);
        glVertex3d(-15.0,34.0,0.0);
    glEnd();
//8
    glColor3f(1.0f,0.078f,0.576f);
    glBegin(GL_TRIANGLES);
        glVertex3d(-20.0,36.0,0.0);
        glVertex3d(-30.0,36.0,0.0);
        glVertex3d(-25.0,28.0,0.0);
    glEnd();
    glColor3f(0.133f,0.545f,0.133f);
    glBegin(GL_TRIANGLES);
        glVertex3d(-22.0,36.0,0.0);
        glVertex3d(-28.0,36.0,0.0);
        glVertex3d(-25.0,31.0,0.0);
    glEnd();
    glColor3f(0.647f,0.165f,0.165f);
    glBegin(GL_TRIANGLES);
        glVertex3d(-24.0,36.0,0.0);
        glVertex3d(-26.0,36.0,0.0);
        glVertex3d(-25.0,34.0,0.0);
    glEnd();
//9
    glColor3f(1.0f,0.078f,0.576f);
    glBegin(GL_TRIANGLES);
        glVertex3d(-30.0,36.0,0.0);
        glVertex3d(-40.0,36.0,0.0);
        glVertex3d(-35.0,28.0,0.0);
    glEnd();
    glColor3f(0.133f,0.545f,0.133f);
    glBegin(GL_TRIANGLES);
        glVertex3d(-32.0,36.0,0.0);
        glVertex3d(-38.0,36.0,0.0);
        glVertex3d(-35.0,31.0,0.0);
    glEnd();
    glColor3f(0.647f,0.165f,0.165f);
    glBegin(GL_TRIANGLES);
        glVertex3d(-34.0,36.0,0.0);
        glVertex3d(-36.0,36.0,0.0);
        glVertex3d(-35.0,34.0,0.0);
    glEnd();
//10
    glColor3f(1.0f,0.078f,0.576f);
    glBegin(GL_TRIANGLES);
        glVertex3d(-40.0,36.0,0.0);
        glVertex3d(-50.0,36.0,0.0);
        glVertex3d(-45.0,28.0,0.0);
    glEnd();
    glColor3f(0.133f,0.545f,0.133f);
    glBegin(GL_TRIANGLES);
        glVertex3d(-42.0,36.0,0.0);
        glVertex3d(-48.0,36.0,0.0);
        glVertex3d(-45.0,31.0,0.0);
    glEnd();
    glColor3f(0.647f,0.165f,0.165f);
    glBegin(GL_TRIANGLES);
        glVertex3d(-44.0,36.0,0.0);
        glVertex3d(-46.0,36.0,0.0);
        glVertex3d(-45.0,34.0,0.0);
    glEnd();

    glFlush();

}
void my_keyboard(unsigned char key, int x, int y)
{

	switch (key) {

		    case 'o':
                mov= true;
                glutPostRedisplay();
            break;

            case 's':
                mov1=true;
                glutPostRedisplay();
			break;

			case 'u':
                mov2=true;
                glutPostRedisplay();
			break;

	}
}

int main()
{
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(1000,650);
    glutInitWindowPosition(400,200);
    glutCreateWindow("PUPPET SHOW");
    init();
    glutDisplayFunc(myDisplay);
    glutKeyboardFunc(my_keyboard);
    PlaySound("Puppet Show Music.wav", NULL, SND_ASYNC|SND_FILENAME);
    glutMainLoop();
    return 0;
}
