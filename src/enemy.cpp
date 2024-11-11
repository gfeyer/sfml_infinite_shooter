#include "enemy.hpp"

#include <iostream>
#include <string>

#include "conf.hpp"
#include "util/logger.hpp"
#include "util/resource_manager.hpp"
Enemy::Enemy(sf::Vector2f pos, unsigned int h) : position(pos), health(h)
{
	// Shape
	shape.setRadius(conf::ENEMY_CIRCLE_RADIUS);
	shape.setOutlineThickness(conf::ENEMY_CIRCLE_THICKNESS);
	shape.setOutlineColor(sf::Color::White);
	shape.setFillColor(sf::Color::Black);
	sf::FloatRect shapeBounds = shape.getLocalBounds();
	shape.setOrigin(shapeBounds.left + shapeBounds.width / 2.f, shapeBounds.top + shapeBounds.height / 2.f);
	shape.setPosition(position);

	// Text
	sf::Font& font = ResourceManager::getFont(conf::FONT_1);
	text.setFont(font);
	text.setCharacterSize(24);
	text.setFillColor(sf::Color::Red);
	text.setString(std::to_string(health));
	sf::FloatRect textBounds = text.getLocalBounds();
	text.setOrigin(textBounds.left + textBounds.width / 2.0f, textBounds.top + textBounds.height / 2.0f);
	text.setPosition(position);
}

Enemy::~Enemy()
{
}

void Enemy::update(float dt)
{
	// move enemy down at constant speed
	position.y += conf::ENEMY_SPEED * dt;
	shape.setPosition(position);
	text.setPosition(position);

	text.setString(std::to_string(health));
}

void Enemy::render(sf::RenderWindow& window) const
{
	window.draw(shape);
	window.draw(text);
}
