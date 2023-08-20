#include <iostream>
#include <cmath>

double beamDeflection(){

    std::cout << "This program calculates the determines the maximum deflection on a beam" << std::endl;
    std::cout << "Enter the value for load weight(lbs):";
    double W{};
    std::cin >> W;
    std::cout << "enter value for beam length(ft):";
    double l{};
    std::cin >> l;
    std::cout << "Enter value for modulus of elasticity(lb/ft^2):";
    double E{};
    std::cin >> E;
    std::cout << "Enter value for beam's base(ft):";
    double b{};
    std::cin >> b;
    std::cout << "Enter value for beams height(ft):";
    double h{};
    std::cin >> h;
    double y{(4 * W*(l*l*l)) / (E*b*(h*h*h))};
    return y;
}


int main()
{

std::cout << "The deflection of your beam is: "<< beamDeflection() << std::endl;

return 0;
}
