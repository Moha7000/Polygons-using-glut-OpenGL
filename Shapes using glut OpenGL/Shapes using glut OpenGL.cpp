#include "pch.h"
#include <iostream>
#include <GL\glut.h>
#include <GL\gl.h>

using namespace std;

void myinit(void);
void render(void);

int main(int argc, char**argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(640, 480);
	glutCreateWindow("Polygons");
	myinit();
	glutDisplayFunc(render);

	glutMainLoop();
}

void myinit(void) {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

void render(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	//pentagon
	glColor3f(1.0, 0.0, 0.0);

	int p1[] = { 155 , 470}; 
	int p2[] = { 288 , 420}; 
	int p3[] = { 237 ,337}; 
	int p4[] = {75 , 337 };
	int p5[] = { 24 , 420};

	glBegin(GL_POLYGON);
		glVertex2iv(p1);
		glVertex2iv(p2);
		glVertex2iv(p3);
		glVertex2iv(p4);
		glVertex2iv(p5);
	glEnd();

	//hexagon
	glColor3f(0.0, 1.0, 0.0);

	int h1[] = { 415 , 470 };
	int h2[] = { 550 , 470 };
	int h3[] = { 622 ,400};
	int h4[] = { 550 , 340};
	int h5[] = { 415 , 340 };
	int h6[] = { 345 , 400 };


	glBegin(GL_POLYGON);
		glVertex2iv(h1);
		glVertex2iv(h2);
		glVertex2iv(h3);
		glVertex2iv(h4);
		glVertex2iv(h5);
		glVertex2iv(h6);
	glEnd();

	//heptagon
	glColor3f(0.0, 0.0, 1.0);

	int e1[] = { 155 , 310};
	int e2[] = { 265 , 280 };
	int e3[] = { 290 ,220 };
	int e4[] = { 218 , 170 };
	int e5[] = { 92 , 170 };
	int e6[] = { 20 , 220 };
	int e7[] = { 45 , 280 };


	glBegin(GL_POLYGON);
		glVertex2iv(e1);
		glVertex2iv(e2);
		glVertex2iv(e3);
		glVertex2iv(e4);
		glVertex2iv(e5);
		glVertex2iv(e6);
		glVertex2iv(e7);
	glEnd();

	//octagon
	glColor3f(0.5, 0.5, 0.0);

	int o1[] = { 430 , 310 };
	int o2[] = { 540 , 310 };
	int o3[] = { 610 , 270 };
	int o4[] = { 610, 210 };
	int o5[] = { 540 , 170 };
	int o6[] = { 430, 170 };
	int o7[] = { 360 , 210 };
	int o8[] = { 360 , 270 };


	glBegin(GL_POLYGON);
		glVertex2iv(o1);
		glVertex2iv(o2);
		glVertex2iv(o3);
		glVertex2iv(o4);
		glVertex2iv(o5);
		glVertex2iv(o6);
		glVertex2iv(o7);
		glVertex2iv(o8);
	glEnd();

	//nonagon
	glColor3f(0.0, 0.5, 0.5);

	int n1[] = { 155 , 150 };
	int n2[] = { 245 , 130 };
	int n3[] = { 290 , 90  };
	int n4[] = { 275, 38 };
	int n5[] = { 203, 7 };
	int n6[] = { 108, 7 };
	int n7[] = { 38 , 38 };
	int n8[] = { 20 , 90 };
	int n9[] = { 70 , 130 };


	glBegin(GL_POLYGON);
		glVertex2iv(n1);
		glVertex2iv(n2);
		glVertex2iv(n3);
		glVertex2iv(n4);
		glVertex2iv(n5);
		glVertex2iv(n6);
		glVertex2iv(n7);
		glVertex2iv(n8);
		glVertex2iv(n9);
	glEnd();

	//decagon
	glColor3f(0.5, 0.5, 0.5);

	int d1[] = { 440 , 150 };
	int d2[] = { 528 , 150 };
	int d3[] = { 595 , 120 };
	int d4[] = { 620, 77 };
	int d5[] = { 595, 33 };
	int d6[] = { 528, 7 };
	int d7[] = { 440 , 7 };
	int d8[] = { 375, 33 };
	int d9[] = { 346 , 77 };
	int d10[] = { 375 , 120 };


	glBegin(GL_POLYGON);
	glVertex2iv(d1);
	glVertex2iv(d2);
	glVertex2iv(d3);
	glVertex2iv(d4);
	glVertex2iv(d5);
	glVertex2iv(d6);
	glVertex2iv(d7);
	glVertex2iv(d8);
	glVertex2iv(d9);
	glVertex2iv(d10);

	glEnd();
	glutSwapBuffers();
}
