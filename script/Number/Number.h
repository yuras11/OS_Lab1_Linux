#pragma once
#include <ostream>
#include <cmath>

namespace Number
{
    class Number
    {
    private:
        double number;
    public:
        Number()
        {
            this->number = 0.0;
        }

        Number(double number);

        ~Number() = default;

        void SetNumber(double number);

        double GetNumber();

        Number operator+(Number a);

        Number operator-(Number a);

        Number operator*(Number a);

        Number operator/(Number a);

        friend std::ostream& operator<<(std::ostream& out, const Number& n);

    };

    static Number CreateNumber(double number)
    {
        Number num(number);
        return num;
    }

    static Number SQRT(Number& value)
    {
        Number res(sqrt(value.GetNumber()));
        return res;
    }

    static Number ARCTAN(Number& value)
    {
        Number res(atan(value.GetNumber()));
        return res;
    }

    static Number ZERO = CreateNumber(0.0);
    static Number ONE = CreateNumber(1.0);

};