#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <SFML/Graphics.hpp>

class Player
{
public:
	Player();
	~Player();

	void update(float dt);
	void render(sf::RenderWindow& window);

};

#endif // PLAYER_HPP
