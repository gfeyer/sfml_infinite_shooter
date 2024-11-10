#ifndef PROJECTILE_HPP
#define PROJECTILE_HPP

#include <SFML/Graphics.hpp>

class Projectile {
public:
	virtual void render(sf::Window& window);
	virtual void update(float dt);
};
#endif // PROJECTILE_HPP
