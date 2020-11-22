#include "MoveTrigger.h"
#include "ECS.h"

MoveTrigger::MoveTrigger()
{
}

void MoveTrigger::OnEnter()
{
	Trigger::OnEnter();
	
	for (int i = 0; i < m_targetEntities.size(); i++)
	{
		ECS::GetComponent<PhysicsBody>(m_targetEntities[i]).SetPosition((ECS::GetComponent<PhysicsBody>(m_targetEntities[i]).GetPosition() + movement), true);
		
	}
}

void MoveTrigger::OnExit()
{
	Trigger::OnExit();

	for (int i = 0; i < m_targetEntities.size(); i++)
	{
		ECS::GetComponent<PhysicsBody>(m_targetEntities[i]).SetPosition((ECS::GetComponent<PhysicsBody>(m_targetEntities[i]).GetPosition() - movement), true);
	
	}
}
