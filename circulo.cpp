#define PI 3.1415926535898 
#include <windows.h> 
#include <gl/glut.h> 
#include <math.h> 

void display(void); 

int main(int argc, char *argv[]) 
{ 

glutInit(&argc,argv); 

glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB); 

glutInitWindowSize(250,250); 

glutCreateWindow("simples"); 

glutDisplayFunc(display); 

glutMainLoop(); 

return 0; 
} 

Gl int tot_circulo=100; 
int i; float a=0.02; 
float angulo; 
void display (void) 
{ 
glClearColor(1,1,1,1); 
glClear (GL_COLOR_BUFFER_BIT); 
glColor3d (0,0,1); 
glBegin (GL_POLYGON); 
for(i=0;i<tot_circulo; i++) 
{ 
glColor3d (a*i,0,1); 
angulo=2*PI * i/tot_circulo; 
glVertex2f(cos(angulo),sen(angulo)); 
} 
glEnd(); 
glFlush(); 
} 
