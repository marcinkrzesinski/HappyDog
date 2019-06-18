#pragma once

#include <SFML\Graphics.hpp>
#include <vector>

namespace System
{
	class Collision
	{
	public:
		Collision();

		bool ChceckSpriteCollision(sf::Sprite sprite1, sf::Sprite sprite2);
		bool ChceckSpriteCollision(sf::Sprite sprite1, float scale1, sf::Sprite sprite2, float scale2);

	};
}