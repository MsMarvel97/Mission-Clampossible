#include "RecheckConditions.h"
#include "ECS.h"

void RecheckConditions::OnEnter()
{
	Trigger::OnEnter();
	for (int i = 0; i < m_targetEntities.size(); i++)
	{
		if (ECS::GetComponent<CollisionFlag>(m_targetEntities[i]).GetCollisionTracker() == true)
		{
			ECS::GetComponent<Trigger*>(m_targetTrigger)->AddTargetEntity(m_trueTarget);

			if (m_targetEntities.size() > 0)
			{
				std::cout << "entity added" << std::endl;
			}
		}

	}
}

void RecheckConditions::OnExit()
{
	Trigger::OnExit();
	ECS::GetComponent<Trigger*>(m_targetTrigger)->ClearTargetEntities();
	if (ECS::GetComponent<Trigger*>(m_targetTrigger)->GetTargetEntities().size() == 0)
	{
		std::cout << "entities removed" << std::endl;

	}
}
