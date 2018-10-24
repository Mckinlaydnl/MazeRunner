// Project Includes
#include "Baddy.h"
#include "AssetManager.h"

Baddy::Baddy()
	: MovingObject() // Initialise base class
{
	m_sprite.setTexture(AssetManager::GetTexture("graphics/Enemy1.png"));
	m_velocity.x = 25.0f;
	m_velocity.y = 25.0f;
}