#ifndef PROJECTILE_HPP
#define PROJECTILE_HPP

#include <SFML/Graphics.hpp>

struct Projectile
{
	unsigned int type = 1;
	float speed = 1;
	sf::CircleShape shape;
};
#endif // PROJECTILE_HPP
