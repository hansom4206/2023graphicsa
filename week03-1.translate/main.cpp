#include <GL/glut.h>
float X=0,Y=0;
void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glPushMatrix();
        glTranslatef(X,Y,0);
        glutSolidTeapot( 0.3 );
    glPopMatrix();

	glutSwapBuffers();
}
#include <stdio.h>
void mouse(int button, int state, int x,int y)
{
    X=(x-150)/150.0;
    Y=-(y-150)/150.0;///printf("%d %d %d %d\n",button,state,x,y);
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

	glutCreateWindow("GLUT Shapes");
	glutDisplayFunc(display);
	glutMouseFunc(mouse);
	glutMainLoop();
}
