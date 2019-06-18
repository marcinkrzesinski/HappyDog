#pragma once

#include <SFML\Graphics.hpp>

#include "DEFINITIONS.hpp"
#include "Game.hpp"
#include <vector>


namespace System
{
	class Dog
	{
	public:
		Dog(GameDataRef data);

		void Draw();

		void Animate(float dt);

		void Update(float dt);

		void Tap();

		const sf::Sprite &GetSprite() const;

	private:
		GameDataRef _data;

		sf::Sprite _dogSprite;
		std::vector<sf::Texture> _animationFrames;

		unsigned int _animationIterator;

		sf::Clock _clock;

		sf::Clock movementClock;

		int _dogState;

	};
}