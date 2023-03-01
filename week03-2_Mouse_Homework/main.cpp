#include <GL/glut.h>
#include <stdio.h>
void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glVertex2f(-0.212, 0.676);
    glVertex2f(-0.284, 0.504);
    glVertex2f(-0.304, 0.356);
    glVertex2f(-0.324, 0.244);
    glVertex2f(-0.320, 0.144);
    glVertex2f(-0.280, 0.068);
    glVertex2f(-0.232, 0.048);
    glVertex2f(0.040, 0.012);
    glVertex2f(0.128, 0.052);
    glVertex2f(0.208, 0.184);
    glVertex2f(0.268, 0.436);
    glVertex2f(0.252, 0.628);
    glVertex2f(-0.012, 0.752);
    glVertex2f(-0.232, 0.876);
    glEnd();
    glutSwapBuffers();
}
void mouse(int button, int state, int x,int y)
{
    float X= (x-250)/250.0;
    float Y=-(y-250)/250.0;///printf("%d %d %d %d\n",button,state,x,y);
    if(state==GLUT_DOWN){
        printf("    glVertex2f(%.3f, %.3f);\n",X,Y);
        }
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(500,500);
    glutCreateWindow("GLUT Shapes");

	glutDisplayFunc(display);
	glutMouseFunc(mouse);

	glutMainLoop();
}
