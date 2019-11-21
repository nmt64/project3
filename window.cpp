#include "window.h"

void Window :: drawWindow1(){
    //Window 1
    glColor3f(0.6f, 0.7333f, 1.0f);
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-9.99f, 2.0f, 6.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-9.99f, 5.0f, 6.0f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-9.99f, 5.0f, 2.0f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-9.99f, 2.0f, 2.0f);
    glEnd();
    
    glColor3f(0.149f, 0.149f, 0.149f);
    glLineWidth(10.0f);
    glBegin(GL_LINES);
    //left
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-9.98f, 2.0f, 6.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-9.98f, 5.0f, 6.0f);
    //top
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-9.98f, 5.0f, 6.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-9.98f, 5.0f, 2.0f);
    //right
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-9.98f, 2.0f, 2.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-9.98f, 5.0f, 2.0f);
    //bottom
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-9.98f, 2.0f, 6.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-9.98f, 2.0f, 2.0f);
    glEnd();
    
    //Cross
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-9.98f, 2.0f, 4.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-9.98f, 5.0f, 4.0f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-9.98f, 3.5f, 6.0f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-9.98f, 3.5f, 2.0f);
    glEnd();
}

void Window :: drawWindow2(){
    //Window 2
    glColor3f(0.6f, 0.7333f, 1.0f);
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-9.99f, 2.0f, -6.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-9.99f, 5.0f, -6.0f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-9.99f, 5.0f, -2.0f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-9.99f, 2.0f, -2.0f);
    glEnd();
    
    glColor3f(0.149f, 0.149f, 0.149f);
    glLineWidth(10.0f);
    glBegin(GL_LINES);
    //left
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-9.98f, 2.0f, -6.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-9.98f, 5.0f, -6.0f);
    //top
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-9.98f, 5.0f, -6.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-9.98f, 5.0f, -2.0f);
    //right
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-9.98f, 2.0f, -2.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-9.98f, 5.0f, -2.0f);
    //bottom
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-9.98f, 2.0f, -6.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-9.98f, 2.0f, -2.0f);
    glEnd();
    
    //Cross
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-9.98f, 2.0f, -4.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-9.98f, 5.0f, -4.0f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-9.98f, 3.5f, -6.0f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-9.98f, 3.5f, -2.0f);
    glEnd();
}

void Window :: drawWindowSill(){
    glColor3f(0.149f, 0.149f, 0.149f);
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-9.99f, 2.0f, -6.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-9.99f, 2.0f, -2.0f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-9.5f, 2.0f, -2.0f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-9.5f, 2.0f, -6.0f);
    
    glColor3f(0.2f, 0.2f, 0.2f);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-9.5f, 2.0f, -6.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-9.5f, 2.0f, -2.0f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-9.5f, 1.8f, -2.0f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-9.5f, 1.8f, -6.0f);
    
    glColor3f(0.24f, 0.24f, 0.24f);
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-9.99f, 2.0f, -6.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-9.5f, 2.0f, -6.0f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-9.5f, 1.8f, -6.0f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-9.99f, 1.8f, -6.0f);
    
    glTexCoord2f(0.0f, 1.0f);
    glVertex3f(-9.99f, 2.0f, -2.0f);
    glTexCoord2f(0.0f, 0.0f);
    glVertex3f(-9.5f, 2.0f, -2.0f);
    glTexCoord2f(1.0f, 0.0f);
    glVertex3f(-9.5f, 1.8f, -2.0f);
    glTexCoord2f(1.0f, 1.0f);
    glVertex3f(-9.99f, 1.8f, -2.0f);
    
    glEnd();
}
