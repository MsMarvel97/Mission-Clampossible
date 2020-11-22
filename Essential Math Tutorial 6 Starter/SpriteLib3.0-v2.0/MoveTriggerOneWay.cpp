#include "MoveTriggerOneWay.h"
#include "ECS.h"

MoveTriggerOneWay::MoveTriggerOneWay()
{
}

void MoveTriggerOneWay::OnEnter()
{
	Trigger::OnEnter();

	for (int i = 0; i < m_targetEntities.size(); i++)
	{
		ECS::GetComponent<PhysicsBody>(m_targetEntities[i]).SetPosition((ECS::GetComponent<PhysicsBody>(m_targetEntities[i]).GetPosition() + movement), true);

	}
}

void MoveTriggerOneWay::OnExit()
{
}