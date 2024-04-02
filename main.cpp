#include "TShirt.h"
#include "Jeans.h"
#include "Dress.h"

int main() {
    TShirt tshirt("Cotton");
    Jeans jeans("Denim");
    Dress dress("Silk");

    std::cout << "Displaying T-Shirt details:\n";
    std::cout << tshirt << "\n\n";
    std::cout << "Displaying Jeans details:\n";
    std::cout << jeans << "\n\n";
    std::cout << "Displaying Dress details:\n";
    std::cout << dress << std::endl;

    return 0;
}
