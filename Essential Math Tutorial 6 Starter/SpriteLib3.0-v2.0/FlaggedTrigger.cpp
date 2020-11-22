#include "FlaggedTrigger.h"
#include "ECS.h"


void FlaggedTrigger::OnEnter()
{
	Trigger::OnEnter();
	ECS::GetComponent<CollisionFlag>(m_targetEntities[0]).SetCollisionTracker(true);
	if (ECS::GetComponent<CollisionFlag>(m_targetEntities[0]).GetCollisionTracker() == true)
	{
		std::cout << "it's flagged" << std::endl;
	}
}

void FlaggedTrigger::OnExit()
{
	Trigger::OnExit();
	ECS::GetComponent<CollisionFlag>(m_targetEntities[0]).SetCollisionTracker(false);
	if (ECS::GetComponent<CollisionFlag>(m_targetEntities[0]).GetCollisionTracker() == false)
	{
		std::cout << "it's unflagged" << std::endl;
	}
}