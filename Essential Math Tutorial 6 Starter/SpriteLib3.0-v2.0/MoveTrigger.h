#pragma once
#include "Trigger.h"

class MoveTrigger : public Trigger
{
public:
	MoveTrigger();

	void OnEnter() override;
	void OnExit() override;

protected:
	bool triggered = false;
};
