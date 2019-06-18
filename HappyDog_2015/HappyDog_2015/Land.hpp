#pragma once

#include <SFML\Graphics.hpp>
#include "Game.hpp"
#include <vector>

namespace System
{

	class Land
	{
	public:
		Land(GameDataRef data);

		void MoveLand(float dt);
		void DrawLand();

	private:
		GameDataRef _data;

		std::vector<sf::Sprite> _landSprites;

	};
}
