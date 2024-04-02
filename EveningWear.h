#ifndef EVENINGWEAR_H
#define EVENINGWEAR_H
#include "WomensClothing.h"

class EveningWear : public WomensClothing {
public:
    EveningWear(std::string material) : WomensClothing(material) {}
    void display() const override {
        std::cout << "Evening Wear, ";
        WomensClothing::display();
    }
};
#endif //EVENINGWEAR_H