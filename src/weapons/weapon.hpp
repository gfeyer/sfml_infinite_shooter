#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <SFML/Graphics.hpp>

class Weapon {
public:
	Weapon();
	~Weapon();
	void shoot(sf::Vector2f position);

	void update(float dt);

private:
	float timeBetweenShots = 0.1f;
	float timeSinceLastShot = 0.0f;

	unsigned int projectileType = 1;
};

#endif