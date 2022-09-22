#pragma once

#include "Number.h"

class Vector
{
private:
    Number::Number x;
    Number::Number y;
public:
    Vector();
    Vector(Number::Number x, Number::Number y);
    Vector(double x, double y);
    ~Vector() = default;
    Number::Number Get_X();
    Number::Number Get_Y();
    Vector operator+(Vector vector);
    Number::Number GetRadiusInPolarCoordinates();
    Number::Number GetAngleInPolarCoordinates();
};

extern const Vector ZERO;
extern const Vector ONE;