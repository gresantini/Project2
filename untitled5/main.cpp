#include <iostream>
#include "Athlete.h"
#include "Volleyball.h"
#include "Tennis.h"



int main() {
    Athlete sport(72, 140, 'M');
    std::cout << "Athlete: " << sport.getHeight() << " "
              << sport.getWeight() << " "
              << sport.getGender() << std::endl;

    Tennis martina = Tennis();
    martina.setServeSpeed(100);
    martina.setGender('F');
    Tennis bjorn(150, false);
    bjorn.setGender('M');
    if (martina.getGender() == 'F')
        std::cout << "Martina serve speed: " << martina.getServeSpeed() << std::endl;

    Volleyball kerri = Volleyball();
    kerri.setGender('F');
    kerri.setPosition("Opposite Hitter");
    Volleyball giba("Outside Hitter", 23.2f);
    giba.setGender('M');
    if (kerri.getGender() == 'F')
        std::cout << "Kerri is an " << kerri.getPosition() << std::endl;

    return 0;
}

