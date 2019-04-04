#include "Cvijet.h"

using namespace std;




Cvijet::Cvijet(sf::RenderWindow*window)
{
	this->window = window;
}

void Cvijet::draw() {
	sf::CircleShape shape(50.f);
	sf::RectangleShape line(sf::Vector2f(300.f, 10.f));
	line.rotate(90);
	line.setPosition(50, 2);
	window->draw(shape);
	window->draw(line);

}