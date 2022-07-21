#pragma once

#include "Components.h"
#include <iostream>
struct Example : public Behavior
{
    float m_Value = 0.0f;
    TransformComponent* transform;

    void OnCreate() override 
    {
        transform = m_Entity.GetComponent<TransformComponent>();
        m_Value = 12.0f;
        std::cout << "Teste\n";
    }

    void OnTick(float deltaTime) override
    {
        m_Value += 10 * deltaTime;
    }

    void OnDestroy() override 
    {
        m_Value = 0;
    }
    
};

struct Exato : public Behavior
{
    float m_Prop = 0.0f;
};