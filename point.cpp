#include<GL/glut.h>
void display() {
//glClear actually clears the buffer,
glClear(GL_COLOR_BUFFER_BIT);
//used to give each vertex its own color
glColor3f(1.0, 0.0, 0.0);
glBegin(GL_POINTS);
// specifies the x and y coordinates of the vertex,
glVertex2f(10.0, 10.0);
glVertex2f(150.0, 80.0);
glVertex2f(100.0, 20.0);
glVertex2f(200.0, 100.0);
glEnd();
//all issued commands to be executed as quickly as they are accepted 
glFlush();
}
void myinit() {
//specifies the red, green, blue, and alpha values used by glClear to clear the color buffers.
glClearColor(1.0, 1.0, 1.0, 1.0);
glColor3f(1.0, 0.0, 0.0);//Sets the current color
glPointSize(5.0);
gluOrtho2D(0.0, 499.0, 0.0, 499.0);
}
int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(500, 500);
glutInitWindowPosition(0, 0);
glutCreateWindow("Points");
glutDisplayFunc(display);
myinit();
glutMainLoop();
}
