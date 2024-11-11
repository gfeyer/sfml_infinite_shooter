#ifndef PROJECTILE_MANAGER_HPP
#define PROJECTILE_MANAGER_HPP		

#include <list>

#include "SFML/Graphics.hpp"

#include "weapons/projectile.hpp"

class ProjectileManager
{
private:
	ProjectileManager();
	~ProjectileManager();

public:
	static ProjectileManager& getInstance();

	void update(float dt);
	void render(sf::RenderWindow& window);
	void addProjectile(sf::Vector2f position, unsigned int type);

private:
	std::list<Projectile> projectiles;
};

#endif // PROJECTILE_MANAGER_HPP
