#include "VanishTrigger.h"
#include "ECS.h"

void VanishTrigger::OnEnter()
{
	Trigger::OnEnter();
	if (!triggered)
	{
		for (int i = 0; i < m_targetEntities.size(); i++)
		{
			ECS::GetComponent<Sprite>(m_targetEntities[i]).SetTransparency(0.f);
		}
	}
}

void VanishTrigger::OnExit()
{
}
