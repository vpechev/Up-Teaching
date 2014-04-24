#ifndef NUMBER_H_INCLUDED
#define NUMBER_H_INCLUDED

#include <ostream>
#include <istream>

using namespace std;

class Number
{
private:
    int value;

public:
    Number()
    {
    }
    Number(int value) : value(value) {}

    void operator +=(const Number* other)
    {
        value += other->value;
    }

    void operator +=(const Number& other)
    {
        value += other.value;
    }

    void operator +=(int val)
    {
        value += val;
    }

    Number operator + (const Number& rhs)
    {
        value += rhs.value;
        return Number(value);
    }

    Number operator + (int b)
    {
        return Number(this->value + b);
    }

    void operator = (int n)
    {
        this->value = n;
    }

    friend ostream& operator<<(ostream& out, const Number& n)
    {
        out<<n.value;
        return out;
    }

    friend istream& operator>>(istream& is, Number& n)
    {
        is>>n.value;
        return is;
    }

    int getValue() { return value; }
};


#endif // NUMBER_H_INCLUDED
