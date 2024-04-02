#ifndef WOMENSCLOTHING_H
#define WOMENSCLOTHING_H
#include "Clothing.h"

class WomensClothing : public Clothing {
public:
    WomensClothing(std::string material) : Clothing(material) {}
    void display() const override {
        std::cout << "Women's Clothing, ";
        Clothing::display();
    }
};
#endif //WOMENSCLOTHING_H