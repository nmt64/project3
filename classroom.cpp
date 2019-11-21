#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <GLUT/glut.h>

#include "chair.h"
#include "table.h"
#include "cupboard.h"
#include "window.h"
#include "snowman.h"
#include "fan.h"
#include "shelf.h"
#include "tgaClass.h"

#define MAX_TEXTURES    4
#define WINDOW_WIDTH 1000
#define WINDOW_HEIGHT 1000

using namespace std;

unsigned int g_Texture[MAX_TEXTURES] = {0};

// angle of rotation for the camera direction
float angle = 0.0, yAngle = 0.0;
// actual vector representing the camera's direction
float lx = 0.0f, ly = 0.0f, lz = -1.0f;
// XZ position of the camera
float x = -5.0f, z = 18.0f;
float roll = 0.0f;

GLfloat angle1 = 0;   /* in degrees */
GLfloat angle2 = 0;   /* in degrees */
int moving, startx, starty = 0;
GLfloat position[] = {1.0, 1.0, 1.0, 0.0};
GLfloat lightpx = 0.0;
GLfloat lightpy = 3.0;


//for mouse movements
float halfWidth = (float)(WINDOW_WIDTH/2.0);
float halfHeight = (float)(WINDOW_HEIGHT/2.0);
float mouseX = 0.0f, mouseY = 0.0f;

bool move = false;

//Fan
Fan f;

enum myview{    // Constants for different views
    DISTANT, SNOW
};

myview  view = DISTANT;

void CreateTexture(unsigned int textureArray[], char * strFileName, int textureID)
{
    
    char buffer[30];    //filename holder
    int status = 0;        //error codes for file read
    TGA myTGAImage;
    
    if(!strFileName){            // Return from the function if no file name was passed in
        
        cout <<"Error occurred, bad file name "<< endl;
        return;
    }
    
    sprintf (buffer, strFileName);        //load buffer with filename
    status = myTGAImage.readTGA(buffer);// Load into a TGA object
    if(status > 1) {
        cout <<"Error occurred = " << status <<strFileName<< endl;
        exit(0);
    }
    
    // Generate a texture with the associative texture ID stored in the array
    glGenTextures((GLsizei)1, (GLuint *)&textureArray[textureID]);
    
    // This sets the alignment requirements for the start of each pixel row in memory.
    glPixelStorei (GL_UNPACK_ALIGNMENT, 1);
    
    // Bind the texture to the texture arrays index and init the texture
    glBindTexture(GL_TEXTURE_2D, textureArray[textureID]);
    
    // Build Mipmaps (builds different versions of the picture for distances - looks better)
    gluBuild2DMipmaps(GL_TEXTURE_2D, 3,  myTGAImage.width,
                      myTGAImage.height, myTGAImage.format, GL_UNSIGNED_BYTE, myTGAImage.data);
    
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_LINEAR);
}

void set_viewpoint () {
    // Use the current viewpoint to display.
    switch (view) {
            
        case DISTANT:
            // F1 : Static viewpoint and stationary camera.
            //Center observer relative to window width (play with this a bit),
            //at a slight elevation. The observer should be looking at the origin.
            gluLookAt(x, 2.5f, z,
                      x + lx, (2.5f + ly), z + lz,
                      roll + 0.0f, 2.5f, 0.0f);
            glutPostRedisplay();
            break;
        case SNOW:
            gluLookAt(-9.7, 2.5f, -3.0,
                      x + lx, (2.5f + ly), z + lz,
                      roll + 0.0f, 2.5f, 0.0f);
            glutPostRedisplay();
            break;
            
    }
}

void myInit(void)
{
//     light source and lighting model
    GLfloat emission[] = {0.0, 0.0, 0.0, 1.0};
    GLfloat ambient[] = {0.0, 0.0, 0.0, 1.0};  /* no ambient      */
    GLfloat diffuse[] = {1.0, 1.0, 1.0, 1.0};  /* strong diffuse  */

    glLightfv(GL_LIGHT0, GL_EMISSION, emission);
    glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
    glLightfv(GL_LIGHT0, GL_POSITION, position);
    
    
    glFrontFace(GL_CW);
    glEnable(GL_AUTO_NORMAL);
    glEnable(GL_NORMALIZE);
    glEnable(GL_DEPTH_TEST);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    
    glClearColor(0.0, 0.0, 0.0, 1.0);
}


void renderScene(void) {
    
    // Clear Color and Depth Buffers
    
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    // Reset transformations
    glLoadIdentity();
    set_viewpoint();
    glRotatef(angle, 1.0, 0.0, 0.0);
//    glRotatef(mouseY, 0.0, 1.0, 0.0);
//    glRotatef(mouseY, 0.0, 1.0, 0.0);

    glLightfv(GL_LIGHT0, GL_POSITION, position);
    position[0] = lightpx;
    position[1] = lightpy;
    
    
    
    glDisable(GL_LIGHTING);
    glDisable(GL_LIGHT0);
    
    GLdouble eqn[4] = {2.0, 2.0,2.0,0.0};
    
    
    
//    glClipPlane(GL_CLIP_PLANE0, eqn);
    glEnable(GL_CLIP_PLANE0);
    // Set the camera
//    gluLookAt(x, 2.5f, z,
//              x + lx, 2.5f + ly, z + lz,
//              roll + 0.0f, 2.5f, 0.0f);
//    glEnable(GL_TEXTURE_2D);
//    glTranslatef(x, y, 0.0);
//    glRotatef(angle2, 1.0, 0.0, 0.0);
//    glRotatef(angle1, 0.0, 1.0, 0.0);
//    glDisable(GL_LIGHTING);
//    glDisable(GL_LIGHT0);
    
    
    // Draw floor
    glEnable(GL_TEXTURE_2D);
//    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D,  g_Texture[0]);
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-10.0f, 0.0f, -10.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-10.0f, 0.0f, 10.0f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(10.0f, 0.0f, 10.0f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(10.0f, 0.0f, -10.0f);
    glEnd();
//    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
    
    //wall
    glEnable(GL_TEXTURE_2D);
//    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D,  g_Texture[1]);
//    glColor3f(0.9294f, 0.9216f, 0.8353f);
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-10.0f, 0.0f, -10.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-10.0f, 7.0f, -10.0f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(10.0f, 7.0f, -10.0f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(10.0f, 0.0f, -10.0f);
    glEnd();
//    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
    
    //wall
//    glBindTexture(GL_TEXTURE_2D,  g_Texture[1]);
    glEnable(GL_TEXTURE_2D);
//    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D,  g_Texture[1]);
//    glColor3f(1.0f, 0.851f, 0.702f);
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-10.0f, 0.0f, -10.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-10.0f, 7.0f, -10.0f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-10.0f, 7.0f, 10.0f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-10.0f, 0.0f, 10.0f);
    glEnd();
//    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
    
    //wall with door
    glEnable(GL_TEXTURE_2D);
//    glPushMatrix();
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
//    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-10.0f, 0.0f, 10.0f);
//    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-10.0f, 7.0f, 10.0f);
//    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-6.0f, 7.0f, 10.0f);
//    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-6.0f, 0.0f, 10.0f);
//    glEnd();
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
    
//    glPushMatrix();
    glColor3f(1.0f, 1.0f, 1.0f);
//    glColor3f(1.0f, 0.851f, 0.702f);
    glBegin(GL_QUADS);
//    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-3.0f, 0.0f, 10.0f);
//    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-3.0f, 7.0f, 10.0f);
//    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(10.0f, 7.0f, 10.0f);
//    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(10.0f, 0.0f, 10.0f);
    glEnd();
//    glPopMatrix();
    
//    glPushMatrix();
//    glColor3f(1.0f, 0.851f, 0.702f);
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
//    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-6.0f, 7.0f, 10.0f);
//    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-6.0f, 5.0f, 10.0f);
//    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-3.0f, 5.0f, 10.0f);
//    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-3.0f, 7.0f, 10.0f);
    glEnd();
//    glPopMatrix();
    
//    glPushMatrix();
//    glColor3f(1.0f, 1.0f, 1.0f);
    glColor3f(0.4f, 0.2f, 0.0f);
    glLineWidth(30.0f);
    glBegin(GL_LINES);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-6.0f, 5.0f, 10.01f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-3.0f, 5.0f, 10.01f);
    glEnd();
//    glPopMatrix();
    
//    glPushMatrix();
    glBegin(GL_LINES);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-6.0f, 5.0f, 10.01f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-6.0f, 0.0f, 10.01f);
    glEnd();
//    glPopMatrix();
    
//    glPushMatrix();
    glBegin(GL_LINES);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-3.0f, 0.0f, 10.01f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-3.0f, 5.0f, 10.01f);
    glEnd();
//    glPopMatrix();
    
    
    //wall
//    glBindTexture(GL_TEXTURE_2D,  g_Texture[1]);
//    glPushMatrix();
    glEnable(GL_TEXTURE_2D);
    
    glBindTexture(GL_TEXTURE_2D,  g_Texture[1]);
//    glColor3f(1.0f, 0.851f, 0.702f);
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(10.0f, 0.0f, -10.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(10.0f, 7.0f, -10.0f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(10.0f, 7.0f, 10.0f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(10.0f, 0.0f, 10.0f);
    glEnd();
    glDisable(GL_TEXTURE_2D);
//    glPopMatrix();
    
    //ceiling
//    glPushMatrix();
    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D,  g_Texture[2]);
    glColor3f(0.95f, 0.95f, 0.95f);
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-10.0f, 7.0f, -10.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(10.0f, 7.0f, -10.0f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(10.0f, 7.0f, 10.0f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-10.0f, 7.0f, 10.0f);
    glEnd();
    
    glDisable(GL_TEXTURE_2D);
//    glPopMatrix();
    
    // Draw prof's chair
    Chair profChair;
    glEnable(GL_TEXTURE_2D);
    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D,  g_Texture[3]);
    glTranslatef( 6.0f, 1.0f, -9.0f);
    glScalef(0.32f, 0.32f, 0.32f);
    glRotatef(-30.0, 0.0, 1.0, 0.0);
    profChair.drawChair();
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
    
    // Draw prof's table
    Table profTable;
    glEnable(GL_TEXTURE_2D);
    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D,  g_Texture[3]);
    glTranslatef( 6.0f, 1.4f, -7.6f);
    glScalef(0.5f, 0.5f, 0.5f);
    glRotatef(-30.0, 0.0, 1.0, 0.0);
    profTable.drawTable();
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
    
    // Draw student chairs
    Chair studentChair[4][4];
    glEnable(GL_TEXTURE_2D);
//    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D,  g_Texture[3]);
    for (int i = -3; i <= 3; i+=2){
        for (int j = -3; j <= 3; j+=2) {
            glPushMatrix();
            glTranslatef(i*2.0, 0.8f, j * 2.0 + 2.2f);
            glScalef(0.25f, 0.25f, 0.25f);
            glRotatef(180.0, 0.0, 1.0, 0.0);
            studentChair[i][j].drawChair();
            glPopMatrix();
        }
    }
//    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
    
    // Draw student tables
    Table studentTable[4][4];
    glEnable(GL_TEXTURE_2D);
//    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D,  g_Texture[3]);
    for (int i = -3; i <= 3; i+=2){
        for (int j = -3; j <= 3; j+=2) {
            glPushMatrix();
            glTranslatef(i*2.0 + 0.3f, 1.2f, j * 2.0 + 1.2f);
            glScalef(0.4f, 0.4f, 0.4f);
            // glRotatef(180.0, 0.0, 1.0, 0.0);
            studentTable[i][j].drawTable();
            glPopMatrix();
        }
    }
//    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
    
    
    // Draw kboard
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,  g_Texture[4]);
//    glPushMatrix();
    glColor3f(0.4f, 0.2f, 0.0f);
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-6.0f, 2.0f, -9.99f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-6.0f, 5.5f, -9.99f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(6.0f, 5.5f, -9.99f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(6.0f, 2.0f, -9.99f);
    glEnd();
//    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
    
    glEnable(GL_TEXTURE_2D);
//    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D,  g_Texture[5]);
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-5.8f, 2.2f, -9.98f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-5.8f, 5.3f, -9.98f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(5.8f, 5.3f, -9.98f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(5.8f, 2.2f, -9.98f);
    glEnd();
//    glPopMatrix();
    glDisable(GL_TEXTURE_2D);

    
    //windows
    Window w;
    w.drawWindow1();
    w.drawWindow2();
    w.drawWindowSill();
    glPushMatrix();
    glTranslatef( 0.0f, 0.0f, 8.0f);
    w.drawWindowSill();
    glPopMatrix();
    
    //Draw Snowmen
    Snowman s;
    glPushMatrix();
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glTranslatef(-9.7f, 2.0f, -3.0);
    glScalef(0.3f, 0.3f, 0.3f);
    s.drawSnowMan();
    glDisable(GL_LIGHTING);
    glDisable(GL_LIGHT0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef( 5.0f, 1.4f, -7.6f);
    glScalef(1.0f, 1.0f, 1.0f);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    s.drawSnowMan();
    glDisable(GL_LIGHTING);
    glDisable(GL_LIGHT0);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(2.0, 1.2f, 1.2f);
    glScalef(0.4f, 0.4f, 0.4f);
    glScalef(1.0f, 1.0f, 1.0f);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    s.drawSnowMan();
    glDisable(GL_LIGHTING);
    glDisable(GL_LIGHT0);
    glPopMatrix();
    
    
    
    //fan
    glPushMatrix();
    glTranslatef(0.0f, 6.0f, 0.0);
    glScalef(0.3f, 0.3f, 0.3f);
    f.drawFan();
    glPopMatrix();
    
    Shelf sh;
    glPushMatrix();
    glTranslatef(8.99f, 3.5f, 4.0);
    glScalef(0.25f, 0.25f, 0.25f);
    glRotatef(-90, 0.0f, 1.0f, 0.0f);
    sh.drawShelf();
    glPopMatrix();
    
    CreateTexture(g_Texture, "textures/checkboard.tga", 0);
    CreateTexture(g_Texture, "textures/wall.tga", 1);
    CreateTexture(g_Texture, "textures/lightwood.tga", 3);
    CreateTexture(g_Texture, "textures/woodboard.tga", 4);
    CreateTexture(g_Texture, "textures/board.tga", 5);
    glDisable(GL_TEXTURE_2D);
    
    
    if(abs(mouseX) > 0.3){
        angle -= (0.004f * mouseX);
        lx = sin(angle);
        lz = -cos(angle);
    }
    if(abs(mouseY) > 0.3){
        if(abs(yAngle) < (M_PI/2)){
            yAngle += (0.002f * mouseY);
        }
        ly = sin(yAngle);
    }
    
    
    glutSwapBuffers();
}

// Handles the events triggered when one of the arrow keys are pressed.
// @param key : key pressed
// @param xx : x coordinate of mouse position
// @param yy : y coordinate of mouse position
void processSpecialKeys(int key, int xx, int yy) {
    
    float fraction = 0.1f;
    
    switch (key) {
        case GLUT_KEY_LEFT:
            x += sin(angle - M_PI/2.0) * fraction;
            z += -cos(angle - M_PI/2.0) * fraction;
            break;
        case GLUT_KEY_RIGHT:
            x += sin(M_PI/2.0 + angle) * fraction;
            z += -cos(M_PI/2.0 + angle) * fraction;
            break;
        case GLUT_KEY_UP:
            x += lx * fraction;
            z += lz * fraction;
            break;
        case GLUT_KEY_DOWN:
            x -= lx * fraction;
            z -= lz * fraction;
            break;
    }
}


// Handles the events triggered when any key on the keyboard is pressed.
//Specifically, handles w,a,s,d and Esc.
// moves the camera frward, backward and sideways.
// @param key : key pressed
// @param xx : x coordinate of mouse position
// @param yy : y coordinate of mouse position
void processNormalKeys(unsigned char key, int xx, int yy) {
    float fraction = 0.1f;
    if(key == 'w'){
        x += lx * fraction;
        z += lz * fraction;
    } else if(key == 'a'){
        x += sin(angle - M_PI/2.0) * fraction;
        z += -cos(angle - M_PI/2.0) * fraction;
    } else if(key == 's'){
        x -= lx * fraction;
        z -= lz * fraction;
    } else if(key == 'd'){
        x += sin(M_PI/2.0 + angle) * fraction;
        z += -cos(M_PI/2.0 + angle) * fraction;
    } else if (key == 'x') {
        roll += 0.5f;
    } else if (key == 'z') {
        roll -= 0.5f;
    }
    
    if (key == 27)
        exit(0);
}

// Handles the events triggered when the mouse is moved in the window area.
// Handles yaw and pitch of the camera.
// @param xx : x coordinate of mouse position
// @param yy : y coordinate of mouse position
void processMouseMovement(int xx, int yy){

    mouseX = (float)(halfWidth - xx)/halfWidth;
    mouseY = (float)(halfHeight - yy)/halfHeight;
    angle -= (0.005f * mouseX);
    lx = sin(angle);
    lz = -cos(angle);

    if(abs(yAngle) < (M_PI/2)){
        yAngle += (0.005f * mouseY);
    }
    ly = sin(yAngle);

}

static void motion(int x, int y)
/*
 Rotate the object with mouse
 */
{
    if (moving) {
//        angle1 = (angle1 + (x - startx));
//        angle2 = (angle2 + (y - starty));
//        lightpx = (lightpx + (x-startx));
//        lightpy = (lightpy + (y- starty));
//        startx = x;
//        starty = y;
        mouseX = (float)(halfWidth - x)/halfWidth;
        mouseY = (float)(halfHeight - y)/halfHeight;
//
        angle -= (0.005f * mouseX);
        lx = sin(angle);
        lz = -cos(angle);

        if(abs(yAngle) < (M_PI/2)){
            yAngle += (0.005f * mouseY);
        }
        ly = sin(yAngle);

        glutPostRedisplay();
    }
}

void mouse(int button, int state, int x, int y)
/*
 GLUT calls this when mouse is clicked
 */
{
    /* Rotate the scene with the left mouse button. */
    if (button == GLUT_LEFT_BUTTON) {
        if (state == GLUT_DOWN) {
            moving = 1;
            startx = x;
            starty = y;
        }
        if (state == GLUT_UP) {
            moving = 0;
        }
    }
}


// Adjusts the viewport sie when the window size is changed and sets the projection.
// @param w : new width of window
// @param h : new height of window
void changeSize(int w, int h) {
    
    // Prevent a divide by zero, when window is too short
    // (you cant make a window of zero width).
    if (h == 0)
        h = 1;
    float ratio = w * 1.0 / h;
    
    // Use the Projection Matrix
    glMatrixMode(GL_PROJECTION);
    
    // Reset Matrix
    glLoadIdentity();
    
    // Set the viewport to be the entire window
    glViewport(0, 0, w, h);
    halfWidth = (float)(w/2.0);
    halfHeight = (float)(h/2.0);
    
    // Set the correct perspective.
    gluPerspective(45.0f, ratio, 0.1f, 100.0f);
    
    // Get Back to the Modelview
    glMatrixMode(GL_MODELVIEW);
}

void animate () {
    
    f.rotateFan();
    
    /* refresh screen */
    glutPostRedisplay();
}

int main(int argc, char **argv) {
    
    // init GLUT and create window
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
    glutCreateWindow("Classroom");
//    CreateTexture(g_Texture, "textures/floor.tga", 0);
//    CreateTexture(g_Texture, "textures/wall.tga", 1);
    // register callbacks
    glutDisplayFunc(renderScene);
    glutReshapeFunc(changeSize);
    glutIdleFunc(animate);
    glutKeyboardFunc(processNormalKeys);
    glutSpecialFunc(processSpecialKeys);
//    glutPassiveMotionFunc(processMouseMovement);
    glutMotionFunc(motion);
    glutMouseFunc(mouse);
    // OpenGL init
    glEnable(GL_DEPTH_TEST);
    
    // enter GLUT event processing cycle
    glutMainLoop();
    
    return 0;
}
