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

	// Properties
	sf::Vector2f position;
	unsigned int health;

	// Rendering
	sf::CircleShape shape;
	sf::Text text;
};

#endif // ENEMY_HPP
