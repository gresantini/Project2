//
// Created by gresa on 10/15/2024.
//
#include "Volleyball.h"

// Default constructor
Volleyball::Volleyball() : m_position(""), m_reactionTime(0.0f) {}

// Parameterized constructor
Volleyball::Volleyball(std::string position, float reactionTime)
    : m_position(position), m_reactionTime(reactionTime) {}

// Getters and Setters
std::string Volleyball::getPosition() const { return m_position; }

void Volleyball::setPosition(std::string position) { m_position = position; }

float Volleyball::getReactionTime() const { return m_reactionTime; }

void Volleyball::setReactionTime(float reactionTime) { m_reactionTime = reactionTime; }
