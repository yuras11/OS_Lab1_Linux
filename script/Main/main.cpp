#include <iostream>

#include "Vector.h"
#include "Number.h"


int main()
{
    Number::Number number1(9), number2(10.22);
    Vector vector1(2, 3);
    Vector vector2(3, 4);
    std::cout << "n1 + n2 = " << number1 + number2 << std::endl;
    std::cout << "n1 - n2 = " << number1 - number2 << std::endl;
    std::cout << "n1 * n2 = " << number1 * number2 << std::endl;
    std::cout << "n1 / n2 = " << number1 / number2 << std::endl;
    std::cout << "Vector v1 : (" << vector1.Get_X() << ", " << vector1.Get_Y() << ")" << std::endl;
    std::cout << "Vector1 in polar coordinates:" << std::endl;
    std::cout << "Radius: " << vector1.GetRadiusInPolarCoordinates() << std::endl;
    std::cout << "Angle: " << vector1.GetAngleInPolarCoordinates() << std::endl;
    std::cout << "Sum of vector1 and vector2 :" << "(" << (vector1 + vector2).Get_X() << ", " << (vector1 + vector2).Get_Y() << ")" << std::endl;
    return 0;
}