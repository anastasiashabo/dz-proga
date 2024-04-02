#ifndef CLOTHING_H
#define CLOTHING_H
#include <iostream>
#include <string>

class Clothing {
protected:
    std::string material;

public:
    Clothing(std::string material) : material(material) {}

    virtual void display() const {
        std::cout << "Material: " << material;
    }

    friend std::ostream& operator<<(std::ostream& os, const Clothing& item) {
        item.display();
        return os;
    }
};
#endif //CLOTHING_H