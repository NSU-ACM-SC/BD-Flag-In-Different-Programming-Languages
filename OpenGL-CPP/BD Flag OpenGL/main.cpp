//
//  main.cpp
//  BD Flag OpenGL
//
//  Created by Shawon Ashraf on 12/16/17.
//  Copyright © 2017 Shawon Ashraf. All rights reserved.
//

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

void render(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(0, 0, -30);
    
    // red circle
    glPushMatrix();
    glColor3ub(244, 42, 65);
    glTranslatef(-1, 0, 10);
    glutSolidSphere(5, 50, 50);
    glPopMatrix();
    
    // green rect
    glColor3ub(0, 106, 77);
    glutSolidCube(25);
    
    glFlush();
    glutSwapBuffers();
}

void init(void)
{
    glClearColor( 1, 1, 1, 1);
    glClearDepth( 1.0 );
    glEnable(GL_DEPTH_TEST);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_COLOR_MATERIAL);
}

void reshape(int w, int h)
{
    float aspectRatio = (float)w/(float)h;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45, aspectRatio, 1.0, 100.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH );
    glutInitWindowSize(500, 300);
    glutCreateWindow("Flag of Bangladesh");
    init();
    glutReshapeFunc(reshape);
    glutDisplayFunc(render);
    glutMainLoop();
    return 0;
}
