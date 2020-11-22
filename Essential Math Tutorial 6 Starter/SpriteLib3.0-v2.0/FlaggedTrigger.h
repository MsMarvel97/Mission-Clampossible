#pragma once
#include "Trigger.h"

class FlaggedTrigger : public Trigger
{
public:
	void OnEnter() override;
	void OnExit() override;
};

