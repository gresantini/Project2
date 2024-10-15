//
// Created by gresa on 10/15/2024.
//
#ifndef TENNIS_H
#define TENNIS_H

#include "Athlete.h"

class Tennis : public Athlete {
private:
    int m_serveSpeed;
    bool m_serveAndVolley;

public:
    Tennis();
    Tennis(int serveSpeed, bool serveAndVolley);

    int getServeSpeed() const;
    void setServeSpeed(int serveSpeed);

    bool getServeAndVolley() const;
    void setServeAndVolley(bool serveAndVolley);
};

#endif

