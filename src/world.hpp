#ifndef WORLD_HPP
#define WORLD_HPP

#include <list>

#include <SFML/Graphics.hpp>

#include "enemy.hpp"

class World {
public:
	World();
	~World();

	void update(float dt);
	void render(sf::RenderWindow& window);
	void handleInput(sf::Event event);

private:
	void updateEnemies(float dt);
	void renderEnemies(sf::RenderWindow& window);


private:
	std::list<Enemy> enemies;
};

#endif // !
