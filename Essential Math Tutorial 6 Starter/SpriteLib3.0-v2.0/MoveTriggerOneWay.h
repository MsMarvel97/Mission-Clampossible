#pragma once
#include "Trigger.h"

class MoveTriggerOneWay : public Trigger
{
public:
	MoveTriggerOneWay();

	void OnEnter() override;
	void OnExit() override;

protected:
	bool triggered = false;
};

