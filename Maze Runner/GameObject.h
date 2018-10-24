#pragma once

// Library Includes
#include <SFML/Graphics.hpp>

class GameObject
{
public:

	// These will be very simple or empty functions
	// that can be overriden in derived classes
	void Draw(sf::RenderTarget& _target);
};