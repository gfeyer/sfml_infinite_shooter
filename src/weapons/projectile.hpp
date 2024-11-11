#ifndef PROJECTILE_HPP
#define PROJECTILE_HPP

#include <SFML/Graphics.hpp>

struct Projectile
{
	sf::Vector2f position;
	unsigned int type = 1;
	unsigned int speed = 10;
};
#endif // PROJECTILE_HPP
