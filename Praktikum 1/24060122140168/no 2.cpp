#include <GLUT/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.5, 1.3);
    glVertex2f(0.5, 0.5);
    glVertex2f(0.6, 0.5);
    glVertex2f(0.6, 1.3);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.6, 0.5);
    glVertex2f(0.6, 0.4);
    glVertex2f(0.7, 0.4);
    glVertex2f(0.7, 0.5);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.7, 0.4);
    glVertex2f(0.7, 0.3);
    glVertex2f(0.8, 0.3);
    glVertex2f(0.8, 0.4);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.8, 0.5);
    glVertex2f(0.8, 0.4);
    glVertex2f(0.9, 0.4);
    glVertex2f(0.9, 0.5);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.9, 0.4);
    glVertex2f(0.9, 0.3);
    glVertex2f(1.0, 0.3);
    glVertex2f(1.0, 0.4);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(1.0, 0.5);
    glVertex2f(1.0, 0.4);
    glVertex2f(1.1, 0.4);
    glVertex2f(1.1, 0.5);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(1.1, 0.4);
    glVertex2f(1.1, 0.3);
    glVertex2f(1.2, 0.3);
    glVertex2f(1.2, 0.4);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(1.2, 0.5);
    glVertex2f(1.2, 0.4);
    glVertex2f(1.3, 0.4);
    glVertex2f(1.3, 0.5);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(1.3, 0.4);
    glVertex2f(1.3, 0.3);
    glVertex2f(1.4, 0.3);
    glVertex2f(1.4, 0.4);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(1.4, 0.4);
    glVertex2f(1.4, 1.3);
    glVertex2f(1.5, 1.3);
    glVertex2f(1.5, 0.4);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(1.3, 1.4);
    glVertex2f(1.3, 1.3);
    glVertex2f(1.4, 1.3);
    glVertex2f(1.4, 1.4);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.6, 1.4);
    glVertex2f(0.6, 1.3);
    glVertex2f(0.7, 1.3);
    glVertex2f(0.7, 1.4);
    glEnd();
    
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.7, 1.5);
    glVertex2f(0.7, 1.4);
    glVertex2f(1.3, 1.4);
    glVertex2f(1.3, 1.5);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.7, 1.2);
    glVertex2f(0.7, 1);
    glVertex2f(0.8, 1);
    glVertex2f(0.8, 1.2);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.9, 1.2);
    glVertex2f(0.9, 1);
    glVertex2f(1, 1);
    glVertex2f(1, 1.2);
    glEnd();
    
    glFlush(); // tambahkan untuk memastikan semua perintah sudah dijalankan
}

void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0); // Warna background putih
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 2.0, 0.0, 2.0); // Koordinat window
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 800); // Ukuran window
    glutInitWindowPosition(300, 300); // Posisi window
    glutCreateWindow("Tugas GKV 1.2 Aurellia Putri Budi Arsyaningrum");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

