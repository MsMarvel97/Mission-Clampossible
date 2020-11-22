#pragma once
#include "Trigger.h"

class ShrinkTrigger : public Trigger
{
public:
	void OnEnter() override;
	void OnExit() override;

protected:
	bool triggered = false;
};
