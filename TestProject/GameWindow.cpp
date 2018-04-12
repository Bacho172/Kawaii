#include "GameWindow.h"


void Display()
{
    // kolor t�a - zawarto�� bufora koloru
    glClearColor( 1.0, 1.0, 1.0, 1.0 );
    
    // czyszczenie bufora koloru
    glClear( GL_COLOR_BUFFER_BIT );
    
    // kolor kwadratu
    glColor3f( 1.0, 0.0, 0.0 );
    
    // pocz�tek definicji wielok�ta
    glBegin( GL_POLYGON );
    
    // kolejne wierzcho�ki wielok�ta
    glVertex3f( 0.0, 0.0, 0.0 );
    glVertex3f( 0.0, 1.0, 0.0 );
    glVertex3f( 1.0, 1.0, 0.0 );
    glVertex3f( 1.0, 0.0, 0.0 );
    
    // koniec definicji prymitywu
    glEnd();
    
    // skierowanie polece� do wykonania
    glFlush();
    
    // zamiana bufor�w koloru
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
        // wyj�cie
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
    
    // rozmiary g��wnego okna programu
    glutInitWindowSize( 400, 400 );
    
    // utworzenie g��wnego okna programu
    glutCreateWindow( "Kwadrat 1" );
    
    // do��czenie funkcji generuj�cej scen� 3D
    glutDisplayFunc( Display );
    
    // do��czenie funkcji wywo�ywanej przy zmianie rozmiaru okna
    glutReshapeFunc( Reshape );
    
    // utworzenie menu podr�cznego
    glutCreateMenu( Menu );
    
    // dodatnie pozycji do menu podr�cznego

    glutAddMenuEntry( "Wyjscie", 0 );
    
    // okre�lenie przycisku myszki obs�uguj�cej menu podr�czne
    glutAttachMenu( GLUT_RIGHT_BUTTON );
    
    // wprowadzenie programu do obs�ugi p�tli komunikat�w
    glutMainLoop();
}
