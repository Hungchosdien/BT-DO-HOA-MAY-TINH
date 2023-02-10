#include <GL/glut.h>
#include <cmath>
#include <algorithm>

void initGL()
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); //R=0,G=0,B=0, anpha=1
	glOrtho(-320,320,-240,240,-1,1);	
}
void MidLine(int x1,int y1,int x2,int y2)   
//he so goc m>1
{
     int y_max,x,y;
     int dx=fabs(x1-x2);
     int dy=fabs(y1-y2);
     int p=dx-dy/2;
    if (y1>y2)
     {
         x=x2; y=y2; y_max=y1;
     }
     else
      {
      x=x1; y=y1; y_max=y2;
      }
      glBegin(GL_POINTS);
    glVertex2i(x,y);
     while (y < y_max)
     {
        if (p<0) p=p+dx;
        else {
          x++;
          p=p+dx-dy;
        }
           y++;
         glVertex2i(x,y);
    }
    glEnd();   
}
 void mydisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);  // ==> Red
    MidLine(10, 10, 200, 100);
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
 
