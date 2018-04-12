#include "GameWindow.h"


void Display()
{
    // kolor t³a - zawartoœæ bufora koloru
    glClearColor( 1.0, 1.0, 1.0, 1.0 );
    
    // czyszczenie bufora koloru
    glClear( GL_COLOR_BUFFER_BIT );
    
    // kolor kwadratu
    glColor3f( 1.0, 0.0, 0.0 );
    
    // pocz¹tek definicji wielok¹ta
    glBegin( GL_POLYGON );
    
    // kolejne wierzcho³ki wielok¹ta
    glVertex3f( 0.0, 0.0, 0.0 );
    glVertex3f( 0.0, 1.0, 0.0 );
    glVertex3f( 1.0, 1.0, 0.0 );
    glVertex3f( 1.0, 0.0, 0.0 );
    
    // koniec definicji prymitywu
    glEnd();
    
    // skierowanie poleceñ do wykonania
    glFlush();
    
    // zamiana buforów koloru
    glutSwapBuffers();
}

void Reshape(int width, int height)
{
    // generowanie sceny 3D
    Display();
}

void Menu(int value)
{
    switch( value )
    {
        // wyjœcie
    case 0:
        exit( 0 );
    }
}

GameWindow::GameWindow(int width=640, int height=480)
{
	this->width = width;
	this->height = height;

	// inicjalizacja biblioteki GLUT
	char* pseudoArgs = new char[1];
    glutInit( new int(0), &pseudoArgs );
    
    // inicjalizacja bufora ramki
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_RGB );
    
    // rozmiary g³ównego okna programu
    glutInitWindowSize( 400, 400 );
    
    // utworzenie g³ównego okna programu
    glutCreateWindow( "Kwadrat 1" );
    
    // do³¹czenie funkcji generuj¹cej scenê 3D
    glutDisplayFunc( Display );
    
    // do³¹czenie funkcji wywo³ywanej przy zmianie rozmiaru okna
    glutReshapeFunc( Reshape );
    
    // utworzenie menu podrêcznego
    glutCreateMenu( Menu );
    
    // dodatnie pozycji do menu podrêcznego

    glutAddMenuEntry( "Wyjscie", 0 );
    
    // okreœlenie przycisku myszki obs³uguj¹cej menu podrêczne
    glutAttachMenu( GLUT_RIGHT_BUTTON );
    
    // wprowadzenie programu do obs³ugi pêtli komunikatów
    glutMainLoop();
}
