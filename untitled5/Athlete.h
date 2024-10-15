//
// Created by gresa on 10/15/2024.
//

#ifndef ATHLETE_H
#define ATHLETE_H
#include <string>

class Athlete {
private:
    int m_height;
    int m_weight;
    char m_gender;

public:
    Athlete();
    Athlete(int height, int weight, char gender);

    int getHeight() const;
    void setHeight(int height);

    int getWeight() const;
    void setWeight(int weight);

    char getGender() const;
    void setGender(char gender);
};

#endif
