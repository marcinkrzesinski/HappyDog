#pragma once

#include <SFML/Graphics.hpp>
#include "State.hpp"
#include "Game.hpp"
#include "Pipe.hpp"
#include "Land.hpp"
#include "Dog.hpp"
#include "Collision.hpp"
#include "Flash.hpp"
#include "HUD.hpp"

namespace System
{
	class GameState : public State
	{
	public:
		GameState(GameDataRef data);

		void Init();
		void HandleInput();
		void Update(float dt);
		void Draw(float dt);

	private:
		GameDataRef _data;

		//sf::Clock _clock;
		//sf::Texture _backgroundTexture;

		sf::Sprite _background;

		Pipe *pipe;
		Land *land;
		Dog *dog;
		Collision collision;
		Flash *flash;
		HUD *hud;

		sf::Clock clock;

		int _gameState;

		int _score;

	};
}