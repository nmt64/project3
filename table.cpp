# include "table.h"

void Table :: drawTable() {
    
    // glTranslatef(0.0f, 0.0f, -14.0f);
    
    
    glBegin(GL_QUADS);
    
    //Front
    //
//    glColor3f(.6,.2,0);
    glPushMatrix();
    glColor3f(1.0f, 1.0f, 1.0f);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-4.0f, -0.2f, 2.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(2.0f, -0.2f, 2.0f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(2.0f, 0.2f, 2.0f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-4.0f, 0.2f, 2.0f);
    glPopMatrix();
    
    //Back
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-4.0f, -0.2f, -2.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-4.0f, 0.2f, -2.0f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(2.0f, 0.2f, -2.0f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(2.0f, -0.2f, -2.0f);
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
    
    
    //Left
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-4.0f, -0.2f, -2.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-4.0f, -0.2f, 2.0f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-4.0f, 0.2f, 2.0f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-4.0f, 0.2f, -2.0f);
    glPopMatrix();
    
    //top
    //
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(2.0f, 0.2f, 2.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-4.0f, 0.2f, 2.0f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-4.0f, 0.2f, -2.0f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(2.0f, 0.2f, -2.0f);
    glPopMatrix();
    
    //bottom
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(2.0f, -0.2f, 2.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-4.0f, -0.2f, 2.0f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-4.0f, -0.2f, -2.0f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(2.0f, -0.2f, -2.0f);
    glPopMatrix();
    
    //table front leg
    //front
    //
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
//    glColor3f(.8f, .6f, 0.0f);
    glVertex3f(1.8f, -0.2f, 1.6f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(1.4f, -0.2f, 1.6f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(1.4f, -3.0f, 1.6f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(1.8f, -3.0f, 1.6f);
    glPopMatrix();
    
    //back
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
    glVertex3f(-3.8f, -0.2f, 1.6f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-3.4f, -0.2f, 1.6f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-3.4f, -3.0f, 1.6f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-3.8f, -3.0f, 1.6f);
    glPopMatrix();
    
    //back
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-3.8f, -0.2f, 1.2f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-3.4f, -0.2f, 1.2f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-3.4f, -3.0f, 1.2f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-3.8f, -3.0f, 1.2f);
    glPopMatrix();
    
    //right
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-3.8f, -0.2f, 1.6f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-3.8f, -0.2f, 1.2f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-3.8f, -3.0f, 1.2f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-3.8f, -3.0f, 1.6f);
    glPopMatrix();
    
    //left
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-3.4f, -0.2f, 1.6f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-3.4f, -0.2f, 1.2f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-3.4f, -3.0f, 1.2f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-3.4f, -3.0f, 1.6f);
    glPopMatrix();
    
    //left leg back front
    
    //front
    //glColor3f(1,1,1);
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-3.8f, -0.2f, -1.2f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-3.4f, -0.2f, -1.2f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-3.4f, -3.0f, -1.2f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-3.8f, -3.0f, -1.2f);
    glPopMatrix();
    
    //back
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-3.8f, -0.2f, -1.6f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-3.4f, -0.2f, -1.6f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-3.4f, -3.0f, -1.6f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-3.8f, -3.0f, -1.6f);
    glPopMatrix();
    
    //right
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-3.8f, -0.2f, -1.6f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-3.8f, -0.2f, -1.2f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-3.8f, -3.0f, -1.2f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-3.8f, -3.0f, -1.6f);
    glPopMatrix();
    
    //left
    glPushMatrix();
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-3.4f, -0.2f, -1.6f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-3.4f, -0.2f, -1.2f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-3.4f, -3.0f, -1.2f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-3.4f, -3.0f, -1.6f);
    glPopMatrix();
    
    
    
    glEnd();
}
