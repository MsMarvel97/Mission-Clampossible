#pragma once
#include "Trigger.h"

class EndTrigger : public Trigger
{
public:
	void OnEnter() override;
	void OnExit() override;
};

