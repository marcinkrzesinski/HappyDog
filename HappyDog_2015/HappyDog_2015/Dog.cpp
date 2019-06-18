#include "Dog.hpp"

namespace System
{
	Dog::Dog(GameDataRef data) : _data(data)
	{
		_animationIterator = 0;

		_animationFrames.push_back(_data->assets.GetTexture("Dog Frame 1"));
		_animationFrames.push_back(_data->assets.GetTexture("Dog Frame 2"));
		//_animationFrames.push_back(_data->assets.GetTexture("Dog Frame 3"));
		//_animationFrames.push_back(_data->assets.GetTexture("Dog Frame 4"));

		_dogSprite.setTexture(_animationFrames.at(_animationIterator));
		//_dogSprite.setTexture(_data->assets.GetTexture("Dog Frame 1"));

		_dogSprite.setPosition((_data->window.getSize().x / 4 )- (_dogSprite.getGlobalBounds().width / 2), (_data->window.getSize().y / 2) - (_dogSprite.getGlobalBounds().height / 2));
		_dogState = DOG_STATE_STILL;

	}

	void Dog::Draw()
	{
		_data->window.draw(_dogSprite);
		   
	}

	void Dog::Animate(float dt)
	{
		if (_clock.getElapsedTime().asSeconds() > DOG_ANIMATION_DURATION / _animationFrames.size())
		{
			if (_animationIterator < _animationFrames.size() - 1)
			{
				_animationIterator++;
			}
			else
			{
				_animationIterator = 0;
			}

			_dogSprite.setTexture(_animationFrames.at(_animationIterator));

			_clock.restart();
		}
	}

	void Dog::Update(float dt)
	{
		if (DOG_STATE_FALLING == _dogState)
		{
			_dogSprite.move(0, GRAVITY * dt);
		}
		else if (DOG_STATE_FLYING == _dogState)
		{
			_dogSprite.move(0, -FLYING_SPEED * dt);
		}

		if (movementClock.getElapsedTime().asSeconds() > FLYING_DURATION)
		{
			movementClock.restart();
			_dogState = DOG_STATE_FALLING;
		}
	}

	void Dog::Tap()
	{
		movementClock.restart();
		_dogState = DOG_STATE_FLYING;
	}

	const sf::Sprite &Dog::GetSprite() const
	{
		return _dogSprite;
	}

}