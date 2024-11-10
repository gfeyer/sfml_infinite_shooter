#ifndef WORLD_HPP
#define WORLD_HPP

#include <SFML/Graphics.hpp>

class World {
public:
	World();
	~World();

	void update(float dt);
	void render(sf::RenderWindow& window);

private:
	void updateEnemies(float dt);
	void renderEnemies(sf::RenderWindow& window);
};

#endif // !
