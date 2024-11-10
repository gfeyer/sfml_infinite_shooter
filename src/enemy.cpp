#include "enemy.hpp"

#include <iostream>

#include "conf.hpp"
#include "util/logger.hpp"
Enemy::Enemy(sf::Vector2f pos) : position(pos)
{
    shape.setRadius(conf::ENEMY_CIRCLE_RADIUS);
    shape.setOrigin(shape.getRadius(), shape.getRadius());
    shape.setFillColor(sf::Color::Green);
}

Enemy::~Enemy()
{
}

void Enemy::update(float dt)
{
    shape.setPosition(position);
}

void Enemy::render(sf::RenderWindow& window) const
{
	window.draw(shape);
}
