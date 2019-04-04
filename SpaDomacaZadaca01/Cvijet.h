#pragma once
#include "Cvijet.h"
#include <SFML/Graphics.hpp>
class Cvijet
{
private:
	sf::RenderWindow *window;
	
public:
	Cvijet(sf::RenderWindow *window);
	void draw();

};

