#pragma once

#include "Scene.h"
#include "PhysicsPlaygroundListener.h"

class PhysicsPlayground : public Scene
{
public:
	PhysicsPlayground(std::string name);

	void InitScene(float windowWidth, float windowHeight) override;

	void Update() override;

	//Input overrides
	void KeyboardHold() override;
	void KeyboardDown() override;
	void KeyboardUp() override;

protected:
	PhysicsPlaygroundListener listener;

	//player entity
	int player = 0;
	//nacho fish
	int nachoFish = 0;

	//RECEPTACLE BOUNDS\\
	//receptacle
	int receptacle = 0;
	int receptacleOuterCeiling = 0;
	int receptacleInnerCeiling = 0;
	int receptacleInnerFloor = 0;
	int receptacleBackWall = 0;
	//receptacle front left top collision wall
	int receptacleFLT = 0;
	//receptacle front left bottom collision wall
	int receptacleFLB = 0;

	//TRIANGLE TRIGGER ZONE\\
	//triangle trigger wall right
	int triTriggerRight = 0;
	//triangle trigger wall left
	int triTriggerLeft = 0;
	//floor left
	int floorLeft = 0;
	//floor right
	int floorRight = 0;


	//EEL ZONE\\
	//sacrificial platform
	int sacrifice = 0;
	//moves sacrificial platform
	int sacrificialButton = 0;
	//sacrifice platform trigger
	int sacrificeTrigger = 0;
	//snail entity
	int snail = 0;
	//ramp after eel
	int eelRamp = 0;
	//platform after eel
	int eelPlatform = 0;
	//wall after eel
	int eelWall = 0;

	//PEARL CONTAINER\\
	//pearl container floor
	int pearlFloor = 0;
	//pearl
	int pearl = 0;
	//pearl scaling button
	int pearlButton = 0;

	//END-ZONE\\
	//bridge to end
	int endBridge = 0;

	int nachoLeft = 0;
	int ballBoxLeftWall = 0;
	int ballBoxRightWall = 0;
	int receptacleRamp = 0;
	int bridge = 0;
	bool triggered2 = false;
	float ball = 0;
	PhysicsBody puzzleStart2Body;
	float puzzleStart2X = 0.f;
	float puzzleStart2Y = 0.f;

};
