#ifndef WORLD_HPP
#define WORLD_HPP

#include <list>

#include <SFML/Graphics.hpp>

#include "enemy.hpp"
#include "player.hpp"

class World {
public:
	World();
	~World();

	void update(float dt);
	void render(sf::RenderWindow& window);
	void handleInput(sf::Event event);

private:
	void updateEnemies(float dt);
	void updatePlayer(float dt);
	void updateProjectiles(float dt);

	void renderEnemies(sf::RenderWindow& window);
	void renderPlayer(sf::RenderWindow& window);
	void renderProjectiles(sf::RenderWindow& window);

private:
	std::list<Enemy> enemies;
	Player player;
	float timeSinceLastSpawn = 0.0f;
};

#endif // !
