#include "player.hpp"

Player::Player()
{
	triangle.setPointCount(3);
	triangle.setPoint(0, sf::Vector2f(50, 0));
	triangle.setPoint(1, sf::Vector2f(0, 100));
	triangle.setPoint(2, sf::Vector2f(100, 100));
	triangle.setOrigin(50,100);
}

Player::~Player()
{
}

void Player::update(float dt)
{
	triangle.setPosition(position);
}

void Player::render(sf::RenderWindow& window)
{
	window.draw(triangle);
}
