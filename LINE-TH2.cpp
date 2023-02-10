#include <GL/glut.h>
#include <cmath>
#include <algorithm>

void initGL()
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); //R=0,G=0,B=0, anpha=1
	glOrtho(-320,320,-240,240,-1,1);	
}
void BreLine(int x1, int y1, int x2, int y2)
//truong hop y1=y2
{
    int x_min, x_max;
    if (x1 > x2) {
        x_min = x2;
        x_max = x1;
    }
    else {
        x_min = x1;
        x_max = x2;
    }
    glBegin(GL_POINTS);
    for (int x = x_min; x <= x_max; x++) {
        glVertex2i(x, y1);
    }
    glEnd();
}

     void mydisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);  // ==> Red
    BreLine(10, 10, 200, 100);
//    MidLine(10, 10, 200, 100);
    glViewport(0,0,640,480);
    glFlush();

 

}

 

int main(int argc, char** argv){
    int mode=GLUT_SINGLE | GLUT_RGB;
    glutInitDisplayMode(mode);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("DEMO THUAT TOAN VE DOAN THANG");
     
    initGL();  
    glutDisplayFunc(mydisplay);    
    glutMainLoop();
}
 
