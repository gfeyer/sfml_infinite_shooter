#ifndef ENEMY_HPP
#define ENEMY_HPP	

#include <SFML/Graphics.hpp>

class Enemy
{
public:
	Enemy();
	~Enemy();

	void update(float dt);
	void render(sf::RenderWindow& window);
};

#endif // ENEMY_HPP
