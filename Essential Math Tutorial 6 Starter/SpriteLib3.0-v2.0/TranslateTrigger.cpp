#include "TranslateTrigger.h"


TranslateTrigger::TranslateTrigger()
{
}

void TranslateTrigger::OnEnter()
{
	Trigger::OnEnter();

	ECS::GetComponent<PhysicsBody>(m_targetEntities[0]).SetPosition(movement, true);
}

void TranslateTrigger::OnExit()
{
}
