#include "World.h"
#include "Actor.h"

World::World()
{
}

World::~World()
{
	for (auto CurrentActor : ActorList)
	{
		delete CurrentActor;
		CurrentActor = nullptr;
	}
	ActorList.clear();
}

void World::SpawnActor(Actor* NewActor)
{
	ActorList.push_back(NewActor);
}

void World::DestroyAdctor(Actor* DestroyActor)
{
	ActorList.erase(find(ActorList.begin(), ActorList.end(), DestroyActor));
	delete DestroyActor;
	DestroyActor = nullptr;
}

void World::Tick()
{
	for (auto SelectedActor : ActorList)
	{
		SelectedActor->Tick();
	}
}

void World::Render()
{
	for (auto SelectedActor : ActorList)
	{
		SelectedActor->Render();
	}
}

void World::Input()
{
	
}

void World::BeginPlay()
{
	for (auto SelectedActor : ActorList)
	{
		SelectedActor->BeginPlay();
	}
}
