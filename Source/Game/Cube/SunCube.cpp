#include "Cube/SunCube.h"

void SunCube::Update(_In_ FLOAT deltaTime)
{
	RotateY(deltaTime);
}