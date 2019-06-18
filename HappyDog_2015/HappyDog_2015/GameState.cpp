#include "SplashState.hpp"
#include "MainMenuState.hpp"
#include <sstream>
#include "GameState.hpp"
#include "DEFINITIONS.hpp"

#include <iostream>

namespace System
{
	GameState::GameState(GameDataRef data) : _data(data) {}

	void GameState::Init()
	{
		//std::cout << "GameState" << std::endl;
		_data->assets.LoadTexture("Game Background", GAME_BACKGROUND_FILEPATH);
		_data->assets.LoadTexture("Pipe Up", PIPE_UP_FILEPATH);
		_data->assets.LoadTexture("Pipe Down", PIPE_DOWN_FILEPATH);
		_data->assets.LoadTexture("Land", LAND_FILEPATH);
		_data->assets.LoadTexture("Dog Frame 1", DOG_FRAME_1_FILEPATH);
		_data->assets.LoadTexture("Dog Frame 2", DOG_FRAME_2_FILEPATH);
		//_data->assets.LoadTexture("Dog Frame 3", DOG_FRAME_3_FILEPATH);
		//_data->assets.LoadTexture("Dog Frame 4", DOG_FRAME_4_FILEPATH);

		pipe = new Pipe(_data);
		land = new Land(_data);
		dog = new Dog(_data);

		_background.setTexture(this->_data->assets.GetTexture("Game Background"));
	}

	void GameState::HandleInput()
	{
		sf::Event event;

		while (_data->window.pollEvent(event))
		{
			if (sf::Event::Closed == event.type)
			{
				_data->window.close();
			}
			if (_data->input.IsSpriteClicked(_background, sf::Mouse::Left, _data->window))
			{
				
			}
		}
	}
	void GameState::Update(float dt)
	{
		pipe->MovePiepes(dt);
		land->MoveLand(dt);

		if (clock.getElapsedTime().asSeconds() > PIPE_SPAWN_FREQUENCY)
		{
			pipe->RandomisePipeOffset();
			pipe->SpawnInvisiblePipe();
			pipe->SpawnBottomPipe();
			pipe->SpawnTopPipe();

			clock.restart();
		}

		dog->Animate(dt);
	
	}

	void GameState::Draw(float dt)
	{
		_data->window.clear();
		_data->window.draw(_background);

		pipe->DrawPipes();
		land->DrawLand();
		dog->Draw();

		_data->window.display();
	}

}