#include "RotationTrigger.h"
#include "ECS.h"

RotationTrigger::RotationTrigger()
{
}

void RotationTrigger::OnEnter()
{
	Trigger::OnEnter();

	ECS::GetComponent<PhysicsBody>(m_targetEntities[0]).TriggeredRotation(rotation, true);
}

void RotationTrigger::OnExit()
{
}
