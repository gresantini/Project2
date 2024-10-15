//
// Created by gresa on 10/15/2024.
//

#ifndef VOLLEYBALL_H
#define VOLLEYBALL_H
#include "Athlete.h"
#include <string>

class Volleyball : public Athlete {
private:
    std::string m_position;
    float m_reactionTime;

public:
    Volleyball();
    Volleyball(std::string position, float reactionTime);

    std::string getPosition() const;
    void setPosition(std::string position);

    float getReactionTime() const;
    void setReactionTime(float reactionTime);
};

#endif

