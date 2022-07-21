#pragma once
#include "Components.h"
#include <iostream>
struct Player : public Behavior
{
	TransformComponent* transform;
	void OnTick(float deltaTime) override
	{
		transform->Position.y += 1.0f;
		std::cout << "DeltaTime " << deltaTime << '\n';
	}
	void OnCreate() override
	{
		transform = m_Entity.GetComponent<TransformComponent>();
		if (transform != nullptr)
		{
			transform->Position.y = 22.0f;
		}
		std::cout << "Created\n";
	}
	void OnDestroy() override
	{

	}
};