// SFMLGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SFML\Graphics.hpp"

int main(int argc, _TCHAR* argv[])
{
	sf::RenderWindow window(sf::VideoMode(1024, 800), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}

