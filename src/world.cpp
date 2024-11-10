#include "world.hpp"

#include <iostream>

World::World()
{

	Enemy e{ sf::Vector2f(100, 100) };
	this->enemies.push_back(e);
}

World::~World()
{
}

void World::update(float dt)
{
	updateEnemies(dt);
}

void World::render(sf::RenderWindow& window)
{
	renderEnemies(window);
}

void World::updateEnemies(float dt)
{
	for (auto& enemy : enemies) {
		enemy.update(dt);
	}
}

void World::renderEnemies(sf::RenderWindow& window)
{
	for(const auto& enemy : enemies) {
		enemy.render(window);
	}
}
