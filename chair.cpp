#include "chair.h"

void Chair :: drawChair() {
    
    // glTranslatef(0.0f, 0.0f, -14.0f);
    
    //glRotatef(10, 1.0f, 0.0f, 0.0f);
    //glRotatef(-10, 0.0f, 0.0f, 1.0f);
    //glRotatef(_angle, 0.0f, 1.0f, 0.0f);
    //glRotatef(10, 1.0f, 0.0f, 0.0f);
    //glRotatef(-10, 0.0f, 0.0f, 1.0f);
    //glRotatef(_angle, 0.0f, 1.0f, 0.0f);
    glColor3f(0.3f, 0.302f, 0.0f);
    glBegin(GL_QUADS);
    
    //Front
    //
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-2.0f, -0.2f, 2.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(2.0f, -0.2f, 2.0f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(2.0f, 0.2f, 2.0f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-2.0f, 0.2f, 2.0f);
    glPopMatrix();
    
    //Right
    //
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(2.0f, -0.2f, -2.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(2.0f, 0.2f, -2.0f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(2.0f, 0.2f, 2.0f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(2.0f, -0.2f, 2.0f);
    glPopMatrix();
    
    //Back
    //;
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-2.0f, -0.2f, -2.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-2.0f, 0.2f, -2.0f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(2.0f, 0.2f, -2.0f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(2.0f, -0.2f, -2.0f);
    glPopMatrix();
    
    //Left

    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-2.0f, -0.2f, -2.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-2.0f, -0.2f, 2.0f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-2.0f, 0.2f, 2.0f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-2.0f, 0.2f, -2.0f);
    glPopMatrix();
    
    //top
    //
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(2.0f, 0.2f, 2.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-2.0f, 0.2f, 2.0f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-2.0f, 0.2f, -2.0f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(2.0f, 0.2f, -2.0f);
    glPopMatrix();
    
    //bottom
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(2.0f, -0.2f, 2.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-2.0f, -0.2f, 2.0f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-2.0f, -0.2f, -2.0f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(2.0f, -0.2f, -2.0f);
    glPopMatrix();
    
    //table front leg
    //front
    //
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(1.8f, -0.2f, 1.6f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(1.4f, -0.2f, 1.6f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(1.4f, -3.0f, 1.6f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(1.8f, -3.0f, 1.6f);
    glPopMatrix();
    
    //back
    //;
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(1.8f, -0.2f, 1.2f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(1.4f, -0.2f, 1.2f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(1.4f, -3.0f, 1.2f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(1.8f, -3.0f, 1.2f);
    glPopMatrix();
    
    //right
    //
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(1.8f, -0.2f, 1.6f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(1.8f, -0.2f, 1.2f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(1.8f, -3.0f, 1.2f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(1.8f, -3.0f, 1.6f);
    glPopMatrix();
    
    //left
    //;
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(1.4f, -0.2f, 1.6f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(1.4f, -0.2f, 1.2f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(1.4f, -3.0f, 1.2f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(1.4f, -3.0f, 1.6f);
    glPopMatrix();
    
    //back leg back
    //front
    //;
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(1.8f, -0.2f, -1.2f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(1.4f, -0.2f, -1.2f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(1.4f, -3.0f, -1.2f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(1.8f, -3.0f, -1.2f);
    glPopMatrix();
    
    //back
    //;
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(1.8f, -0.2f, -1.6f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(1.4f, -0.2f, -1.6f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(1.4f, -3.0f, -1.6f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(1.8f, -3.0f, -1.6f);
    glPopMatrix();
    
    //right
    //
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(1.8f, -0.2f, -1.6f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(1.8f, -0.2f, -1.2f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(1.8f, -3.0f, -1.2f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(1.8f, -3.0f, -1.6f);
    glPopMatrix();
    
    //left
    //
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(1.4f, -0.2f, -1.6f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(1.4f, -0.2f, -1.2f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(1.4f, -3.0f, -1.2f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(1.4f, -3.0f, -1.6f);
    glPopMatrix();
    
    //leg left front
    //
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-1.8f, -0.2f, 1.6f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-1.4f, -0.2f, 1.6f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-1.4f, -3.0f, 1.6f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-1.8f, -3.0f, 1.6f);
    glPopMatrix();
    
    //back
    //;
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-1.8f, -0.2f, 1.2f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-1.4f, -0.2f, 1.2f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-1.4f, -3.0f, 1.2f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-1.8f, -3.0f, 1.2f);
    glPopMatrix();
    
    //right
    
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-1.8f, -0.2f, 1.6f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-1.8f, -0.2f, 1.2f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-1.8f, -3.0f, 1.2f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-1.8f, -3.0f, 1.6f);
    glPopMatrix();
    
    //left
    
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-1.4f, -0.2f, 1.6f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-1.4f, -0.2f, 1.2f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-1.4f, -3.0f, 1.2f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-1.4f, -3.0f, 1.6f);
    glPopMatrix();
    
    //left leg back front
    
    //front
    
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-1.8f, -0.2f, -1.2f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-1.4f, -0.2f, -1.2f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-1.4f, -3.0f, -1.2f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-1.8f, -3.0f, -1.2f);
    glPopMatrix();
    
    //back
    
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-1.8f, -0.2f, -1.6f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-1.4f, -0.2f, -1.6f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-1.4f, -3.0f, -1.6f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-1.8f, -3.0f, -1.6f);
    glPopMatrix();
    
    //right
    
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-1.8f, -0.2f, -1.6f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-1.8f, -0.2f, -1.2f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-1.8f, -3.0f, -1.2f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-1.8f, -3.0f, -1.6f);
    glPopMatrix();
    
    //left
    
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-1.4f, -0.2f, -1.6f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-1.4f, -0.2f, -1.2f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-1.4f, -3.0f, -1.2f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-1.4f, -3.0f, -1.6f);
    glPopMatrix();
    
    //chair back
    //front
    //chair upper part
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glColor3f(0.902, 0.902, 0);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-1.8f, 1.2f, -1.8f);
    glVertex3f(1.8f, 1.2f, -1.8f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(1.8f, 3.5f, -1.8f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-1.8f, 3.5f, -1.8f);
    glPopMatrix();
    
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-1.8f, 1.2f, -0.6f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(1.8f, 1.2f, -0.6f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(1.8f, 3.5f, -0.6f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-1.8f, 3.5f, -0.6f);
    glPopMatrix();
    
    //chair upper side
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
//    glColor3f(1, 1, 0.4);
    glVertex3f(-1.8f, 1.2f, -1.80f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-1.8f, 1.2f, -0.6f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-1.8f, 3.5f, -0.6f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-1.8f, 3.5f, -1.8f);
    glPopMatrix();
    
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(1.8f, 1.2f, -1.80f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(1.8f, 1.2f, -0.6f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(1.8f, 3.5f, -0.6f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(1.8f, 3.5f, -1.8f);
    glPopMatrix();
    
    //chair upper top
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
//    glColor3f(1, 1, 0);
    glVertex3f(-1.8f, 3.5f, -1.80f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-1.8f, 3.5f, -0.6f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(1.8f, 3.5f, -0.6f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(1.8f, 3.5f, -1.8f);
    glPopMatrix();
    
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-1.8f, 1.2f, -1.80f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-1.8f, 1.2f, -0.6f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(1.8f, 1.2f, -0.6f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(1.8f, 1.2f, -1.8f);
    glPopMatrix();
    
    // chair top legs
    
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
//    glColor3f(0.2, 0.2, 0.0);
    glVertex3f(-1.2f, 1.2f, -1.20f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-1.2f, 1.2f, -0.6f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-1.2f, .2f, -0.6f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-1.2f, .2f, -1.2f);
    glPopMatrix();
    
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-.8f, 1.2f, -1.20f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-.8f, 1.2f, -0.6f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-.8f, .2f, -0.6f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-.8f, .2f, -1.2f);
    glPopMatrix();
    
    //froont walls adnd back walls
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-1.2f, 1.2f, -1.2f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-0.8f, 1.2f, -1.2f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-0.8f, .2f, -1.2f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-1.2f, .2f, -1.2f);
    glPopMatrix();
    
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-1.2f, 1.2f, -0.6f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-0.8f, 1.2f, -0.6f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-0.8f, .2f, -0.6f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-1.2f, .2f, -0.6f);
    glPopMatrix();
    
    //side walls
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(1.2f, 1.2f, -1.20f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(1.2f, 1.2f, -0.6f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(1.2f, .2f, -0.6f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(1.2f, .2f, -1.2f);
    glPopMatrix();
    
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(.8f, 1.2f, -1.20f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(.8f, 1.2f, -0.6f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(.8f, .2f, -0.6f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(.8f, .2f, -1.2f);
    glPopMatrix();
    
    //froont walls adnd back walls
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
//    glColor3f(0.2, 0.2, 0.0);
    glVertex3f(1.2f, 1.2f, -1.2f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(0.8f, 1.2f, -1.2f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(0.8f, .2f, -1.2f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(1.2f, .2f, -1.2f);
    glPopMatrix();
    
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(1.2f, 1.2f, -0.6f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(0.8f, 1.2f, -0.6f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(0.8f, .2f, -0.6f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(1.2f, .2f, -0.6f);
    glPopMatrix();
    
    //glVertex3f()
    
    glEnd();
    
}
