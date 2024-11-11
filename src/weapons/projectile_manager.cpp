#include "projectile_manager.hpp"

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

}

void ProjectileManager::render(sf::Window& window)
{

}

void ProjectileManager::addProjectile(sf::Vector2f position, unsigned int type)
{
	log_debug << "Adding projectile of type " << type << std::endl;
	Projectile projectile;
	projectile.position = position;
	projectile.type = type;
	projectiles.push_back(projectile);
}
