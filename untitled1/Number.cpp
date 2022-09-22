#include "Number.h"

namespace Number
{
    Number::Number(double number)
    {
        this->number = number;
    }

    void Number::SetNumber(double number)
    {
        this->number = number;
    }

    double Number::GetNumber()
    {
        return this->number;
    }

    Number Number::operator+(Number a)
    {
        return Number(this->number + a.number);
    }

    Number Number::operator-(Number a)
    {
        return Number(this->number - a.number);;
    }

    Number Number::operator*(Number a)
    {
        return Number(this->number * a.number);
    }

    Number Number::operator/(Number a)
    {
        return Number(this->number / a.number);
    }

    std::ostream& operator<<(std::ostream& out, const Number& n)
    {
        return out << n.number;
    }
}