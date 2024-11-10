#include "world.hpp"

#include <iostream>

#include "util/logger.hpp"

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

void World::handleInput(sf::Event event)
{
	if(event.type == sf::Event::MouseButtonPressed) {
		if(event.mouseButton.button == sf::Mouse::Left) {
			for (auto& enemy : enemies) {
				if (enemy.getGlobalBounds().contains(float(event.mouseButton.x), float(event.mouseButton.y))) {
					enemy.hit();
				}
			}
		}
	}
}

void World::updateEnemies(float dt)
{
	for (auto it = enemies.begin(); it != enemies.end();) {
		it->update(dt);
		if(it->getHealth() <= 0) {
			it = enemies.erase(it); // erase returns the next iterator so no need to iterate again
		}
		else {
			++it;
		}
	}
}

void World::renderEnemies(sf::RenderWindow& window)
{
	for(const auto& enemy : enemies) {
		enemy.render(window);
	}
}
