#include "Cube/OrbitCube.h"

void OrbitCube::Update(_In_ FLOAT deltaTime)
{
	RotateY(deltaTime);
}