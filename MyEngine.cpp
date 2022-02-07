#include "MyEngine.h"
#include "World.h"

MyEngine::MyEngine()
{
	CurrentWorld = new World();
	bIsRunning = true;
}

MyEngine::~MyEngine()
{
	delete CurrentWorld;
	CurrentWorld = nullptr;
	bIsRunning = false;
}

void MyEngine::Run()
{
	BeginPlay();
	while (bIsRunning)
	{
		Input();
		Tick();
		Render();
	}
}

void MyEngine::Stop()
{
	bIsRunning = false;
}

void MyEngine::SpawnActor(class Actor* NewActor)
{
	CurrentWorld->SpawnActor(NewActor);
}

void MyEngine::DestroyActor(class Actor* DestroyActor)
{
	CurrentWorld->DestroyAdctor(DestroyActor);
}

void MyEngine::BeginPlay()
{
	CurrentWorld->BeginPlay();
}

void MyEngine::Tick()
{
	CurrentWorld->Tick();
}

void MyEngine::Render()
{
	CurrentWorld->Render();
}

void MyEngine::Input()
{
	CurrentWorld->Input();
}
