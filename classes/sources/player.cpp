#include <windows.h>

#include "../headers/player.h"

void Player::setPosition(int x, int y)
{
    position.x = x;
    position.y = y;
}

void Player::moveUp()
{
    position.y -= 1;
}

void Player::moveDown()
{
    position.y += 1;
}

void Player::moveRight()
{
    position.x += 1;
}

void Player::moveLeft()
{
    position.x -= 1;
}