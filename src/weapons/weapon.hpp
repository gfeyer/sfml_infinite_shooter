#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <SFML/Graphics.hpp>

class Weapon {
public:
	Weapon();
	~Weapon();
	void shoot(sf::Vector2f position);
};

#endif