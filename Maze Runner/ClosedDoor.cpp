
// Project Includes
#include "ClosedDoor.h"
#include "AssetManager.h"

ClosedDoor::ClosedDoor()
	: SpriteObject() // Initialise parent class
{
	m_sprite.setTexture(AssetManager::GetTexture("graphics/DoorClosed.png"));
}