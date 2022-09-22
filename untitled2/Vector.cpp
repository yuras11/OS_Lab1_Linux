#include "Vector.h"

const Vector ZERO = Vector(0.0, 0.0);
const Vector ONE = Vector(1.0, 1.0);

Vector::Vector()
{
    this->x = Number::CreateNumber(0);
    this->y = Number::CreateNumber(1);
}

Vector::Vector(Number::Number x, Number::Number y)
{
    this->x = x;
    this->y = y;
}

Vector::Vector(double x, double y)
{
    this->x = Number::CreateNumber(x);
    this->y = Number::CreateNumber(y);
}

Number::Number Vector::Get_X()
{
    return this->x;
}

Number::Number Vector::Get_Y()
{
    return this->y;
}

Number::Number Vector::GetRadiusInPolarCoordinates()
{
    Number::Number result = ((this->x * this->x) + (this->y * this->y));
    return Number::SQRT(result);
}

Number::Number Vector::GetAngleInPolarCoordinates()
{
    Number::Number result = (this->y / this->x);
    return Number::ARCTAN(result);
}

Vector Vector::operator+(Vector vector)
{
    return Vector(this->x + vector.x, this->y + vector.y);
}