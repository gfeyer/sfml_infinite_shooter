#include "projectile_manager.hpp"

#include "SFML/Graphics.hpp"

#include "util/logger.hpp"

ProjectileManager::ProjectileManager()
{
}

ProjectileManager::~ProjectileManager()
{
}

ProjectileManager& ProjectileManager::getInstance()
{
	static ProjectileManager instance;
	return instance;
}

void ProjectileManager::update(float dt)
{
	for(auto& projectile : projectiles)
	{
		projectile.shape.move(0, -projectile.speed * dt);
	}
}

void ProjectileManager::render(sf::RenderWindow& window)
{
	for(auto& projectile : projectiles)
	{
		window.draw(projectile.shape);
	}
}

void ProjectileManager::addProjectile(sf::Vector2f position, unsigned int type)
{
	Projectile projectile;
	projectile.type = type;
	projectile.speed = 500.0f;
	projectile.shape.setRadius(5.0f);
	projectile.shape.setPosition(position);
	projectile.shape.setFillColor(sf::Color::Yellow);

	projectiles.push_back(projectile);
}