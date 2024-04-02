#ifndef CASUALCLOTHING_H
#define CASUALCLOTHING_H
#include "WomensClothing.h"

class CasualClothing : public WomensClothing {
public:
    CasualClothing(std::string material) : WomensClothing(material) {}
    void display() const override {
        std::cout << "Casual Wear, ";
        WomensClothing::display();
    }
};
#endif //CASUALCLOTHING_H