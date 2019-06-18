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


		_dogSprite.setTexture(_data->assets.GetTexture("Dog Frame 1"));
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
}