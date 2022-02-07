#include <iostream>
#include "MyEnGine.h"
#include "Floor.h"
#include "Player.h"
#include "Wall.h"
#include "Goal.h"

using namespace std;

int main()
{
	MyEngine* PlayeEngine = new MyEngine();

	Wall* NewWall = new Wall();
	
	PlayeEngine->SpawnActor(new Wall(0, 0));
	PlayeEngine->SpawnActor(new Wall(1, 0));
	PlayeEngine->SpawnActor(new Wall(2, 0));
	PlayeEngine->SpawnActor(new Wall(3, 0));
	PlayeEngine->SpawnActor(new Wall(4, 0));
	PlayeEngine->SpawnActor(new Wall(5, 0));
	PlayeEngine->SpawnActor(new Wall(6, 0));
	PlayeEngine->SpawnActor(new Wall(7, 0));
	PlayeEngine->SpawnActor(new Wall(8, 0));
	PlayeEngine->SpawnActor(new Wall(9, 0));
	
	PlayeEngine->SpawnActor(new Wall(0, 1));
	PlayeEngine->SpawnActor(new Wall(9, 1));
	PlayeEngine->SpawnActor(new Wall(0, 2));
	PlayeEngine->SpawnActor(new Wall(9, 2));
	PlayeEngine->SpawnActor(new Wall(0, 3));
	PlayeEngine->SpawnActor(new Wall(9, 3));
	PlayeEngine->SpawnActor(new Wall(0, 4));
	PlayeEngine->SpawnActor(new Wall(9, 4));
	PlayeEngine->SpawnActor(new Wall(0, 5));
	PlayeEngine->SpawnActor(new Wall(9, 5));
	PlayeEngine->SpawnActor(new Wall(0, 6));
	PlayeEngine->SpawnActor(new Wall(9, 6));
	PlayeEngine->SpawnActor(new Wall(0, 7));
	PlayeEngine->SpawnActor(new Wall(9, 7));
	PlayeEngine->SpawnActor(new Wall(0, 8));
	PlayeEngine->SpawnActor(new Wall(9, 8));

	PlayeEngine->SpawnActor(new Wall(0, 9));
	PlayeEngine->SpawnActor(new Wall(1, 9));
	PlayeEngine->SpawnActor(new Wall(2, 9));
	PlayeEngine->SpawnActor(new Wall(3, 9));
	PlayeEngine->SpawnActor(new Wall(4, 9));
	PlayeEngine->SpawnActor(new Wall(5, 9));
	PlayeEngine->SpawnActor(new Wall(6, 9));
	PlayeEngine->SpawnActor(new Wall(7, 9));
	PlayeEngine->SpawnActor(new Wall(8, 9));
	PlayeEngine->SpawnActor(new Wall(9, 9));
	


	PlayeEngine->Run();

	delete PlayeEngine;
	PlayeEngine = nullptr;

	return 0;
}