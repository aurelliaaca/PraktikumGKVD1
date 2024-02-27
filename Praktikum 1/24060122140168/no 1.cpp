#include <GLUT/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Mengatur ketebalan garis
    glLineWidth(3.0); // Ubah ketebalan garis menjadi 3
    
    // Gambar GL_LINE_STRIP
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.5, 2.3);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-0.25, 2.9);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(0.0, 2.3);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(0.25, 2.9);
    glColor3f(0.0, 1.0, 0.0);
    glEnd();
    
    // Gambar GL_LINE_LOOP
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.7, 2.9);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(1.0, 2.6);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(1.3, 2.9);
    glColor3f(0.0, 1.0, 0.0);
    glEnd();
    
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.7, 2.3);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(1.0, 2.6);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(1.3, 2.3);
    glColor3f(0.0, 1.0, 0.0);
    glEnd();
    
    // Gambar GL_TRIANGLE_FAN
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(2.1, 2.6);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(2.4, 2.9);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(1.8, 2.9);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(1.8, 2.3);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(2.4, 2.3);
    glEnd();
    
    // Gambar GL_TRIANGLE_STRIP
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-0.5, 1.5);
    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(-0.5, 0.75);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.25, 1.5);
    glEnd();
    
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-0.5, 1.5);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(-0.5, 0.75);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(0.25, 0.75);
    glEnd();
    
    // Gambar GL_QUADS
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(1.3, 1.5);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(1.3, 1.5);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.7, 0.75);
    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(1.3, 0.75);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(1.3, 0.75);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(1.3, 1.5);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.7, 1.5);
    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(1.3, 0.75);
    glEnd();
    
    // Gambar GL_QUAD_STRIP
    glBegin(GL_QUAD_STRIP);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(1.8, 1.5);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(1.8, 0.75);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(2.4, 1.5);
    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(1.8, 0.75);
    glEnd();
    
    glBegin(GL_QUAD_STRIP);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(1.8, 1.5);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(1.8, 0.75);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(2.4, 0.75);
    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(1.8, 0.75);
    glEnd();
    
    glFlush();
}

void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0); // Warna background putih
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 3.0, -1.0, 3.0); // Koordinat window
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 800); // Ukuran window
    glutInitWindowPosition(100, 100); // Posisi window
    glutCreateWindow("Tugas GKV 1 Aurellia Putri Budi Arsyaningrum");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

