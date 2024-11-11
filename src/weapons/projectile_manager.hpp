#ifndef PROJECTILE_MANAGER_HPP
#define PROJECTILE_MANAGER_HPP		

#include <list>

#include "SFML/Graphics.hpp"

#include "weapons/projectile.hpp"
#include "enemy.hpp"

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

	void setEnemiesRef(std::list<Enemy>* enemies) { this->enemiesRef = enemies; }

private:
	std::list<Projectile> projectiles;
	std::list<Enemy>* enemiesRef; // for checking collisions
};

#endif // PROJECTILE_MANAGER_HPP
