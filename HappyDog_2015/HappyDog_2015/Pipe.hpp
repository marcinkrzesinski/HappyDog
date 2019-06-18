#pragma once

#include <SFML\Graphics.hpp>
#include "Game.hpp"
#include <vector>
#include "DEFINITIONS.hpp"

namespace System
{
	class Pipe
	{
	public:
		Pipe(GameDataRef data);

		void SpawnBottomPipe();
		void SpawnTopPipe();
		void SpawnInvisiblePipe();
		void SpawnScoringPipe();
		void MovePiepes(float dt);
		void DrawPipes();
		void RandomisePipeOffset();

		const std::vector<sf::Sprite> &GetSprites() const;
		std::vector<sf::Sprite> &GetScoringSprites();

	private:
		GameDataRef _data;
		std::vector<sf::Sprite> pipeSprites;
		std::vector<sf::Sprite> scoringPipes;

		int _landHeight;
		int _pipeSpawnYOffset;
	};


}