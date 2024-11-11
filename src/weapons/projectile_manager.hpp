#ifndef PROJECTILE_MANAGER_HPP
#define PROJECTILE_MANAGER_HPP		

#include <list>

#include "weapons/projectile.hpp"

class ProjectileManager
{
private:
	ProjectileManager();
	~ProjectileManager();

public:
	static ProjectileManager& getInstance();

	void update(float dt);
	void render(sf::Window& window);
	void addProjectile(sf::Vector2f position, unsigned int type);

private:
	std::list<Projectile> projectiles;
};

#endif // PROJECTILE_MANAGER_HPP
