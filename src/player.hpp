#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <memory>

#include <SFML/Graphics.hpp>

#include "conf.hpp"
#include "weapons/weapon.hpp"

class Player
{
public:
	Player();
	~Player();

	void update(float dt);
	void render(sf::RenderWindow& window);

	// Actions
	void moveLeft() { position.x -= conf::PLAYER_SPEED; }
	void moveRight() { position.x += conf::PLAYER_SPEED; }

	// Setters
	void setPosition(sf::Vector2f pos) { position = pos; }
	void setWeapon(std::unique_ptr<Weapon> weapon) { this->weapon = std::move(weapon); }
	
	// Getters

private:
	// Properties
	sf::Vector2f position;
	unsigned int health;

	// Rendering
	sf::ConvexShape triangle;

	// Weapon
	std::unique_ptr<Weapon> weapon;

};

#endif // PLAYER_HPP
