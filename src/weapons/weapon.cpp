#include "weapon.hpp"

#include "weapons/projectile_manager.hpp"

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

void Weapon::shoot(sf::Vector2f position)
{
	if(timeSinceLastShot >= timeBetweenShots)
	{
		timeSinceLastShot = 0.0f;

		ProjectileManager::getInstance().addProjectile(position, projectileType);
	}
}

void Weapon::update(float dt)
{
	timeSinceLastShot += dt;
}
