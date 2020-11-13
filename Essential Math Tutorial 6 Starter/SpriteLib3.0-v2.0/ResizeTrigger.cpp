#include "ResizeTrigger.h"
#include "ECS.h"

void ResizeTrigger::OnEnter()
{
	Trigger::OnEnter();
	float x;
	float y;
	const auto body = ECS::GetComponent<PhysicsBody>(m_targetEntities[0]).GetBodyType();

	if (body == BodyType::CIRCLE)
	{
		float scaledRadius = (ECS::GetComponent<Sprite>(m_targetEntities[0]).GetWidth() / 2.f) * scalar;
		x = ECS::GetComponent<Sprite>(m_targetEntities[0]).GetWidth() + scaledRadius;
		y = ECS::GetComponent<Sprite>(m_targetEntities[0]).GetHeight() + scaledRadius;
	}
	else
	{
		x = ECS::GetComponent<Sprite>(m_targetEntities[0]).GetWidth() * scalar;
		y = ECS::GetComponent<Sprite>(m_targetEntities[0]).GetHeight() * scalar;
	}

	std::string fileName = "BeachBall.png";

	ECS::GetComponent<PhysicsBody>(m_targetEntities[0]).ScaleBody(scalar, fixtures);
	ECS::GetComponent<Sprite>(m_targetEntities[0]).SetSizeScale(scalar);
	ECS::GetComponent<Sprite>(m_targetEntities[0]).LoadSprite(fileName, x, y);
	triggered = true;
}

void ResizeTrigger::OnExit()
{
	Trigger::OnExit();
}
