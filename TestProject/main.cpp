#include <SFML/Window.hpp>

int main()
{
	sf::Window oknoAplikacji(sf::VideoMode(800, 600, 32), "Kurs SFML 2.0");
	while (oknoAplikacji.isOpen())
	{
		oknoAplikacji.display();
	}
	return 0;
}
