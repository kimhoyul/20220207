#pragma once
#include <vector>

using namespace std;

class World
{
public:
	World();
	virtual ~World();

	void SpawnActor(class Actor* NewActor);
	void DestroyAdctor(class Actor* DestroyActor);
	
	void Tick();
	void Render();
	void Input();
	void BeginPlay();

protected:
	vector<class Actor*> ActorList;
};

