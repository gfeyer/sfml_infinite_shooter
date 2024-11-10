#ifndef ENEMY_HPP
#define ENEMY_HPP	

#include <SFML/Graphics.hpp>

class Enemy
{
public:
	Enemy(sf::Vector2f pos);
	~Enemy();

	void update(float dt);
	void render(sf::RenderWindow& window) const;

private:
	sf::Vector2f position;
	sf::CircleShape shape;
};

#endif // ENEMY_HPP
