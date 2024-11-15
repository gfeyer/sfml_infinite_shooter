#ifndef ENEMY_HPP
#define ENEMY_HPP	

#include <SFML/Graphics.hpp>

class Enemy
{
public:
	Enemy(sf::Vector2f pos, unsigned int h=1);
	~Enemy();

	void update(float dt);
	void render(sf::RenderWindow& window) const;

	// 
	void hit() { health--; }

	// Getters
	unsigned int getHealth() const { return health; }
	sf::FloatRect getGlobalBounds() const { return shape.getGlobalBounds(); }

private:

	// Properties
	sf::Vector2f position;
	unsigned int health;

	// Rendering
	sf::CircleShape shape;
	sf::Text text;
};

#endif // ENEMY_HPP
