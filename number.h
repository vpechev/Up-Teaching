#ifndef NUMBER_H_INCLUDED
#define NUMBER_H_INCLUDED

#include <ostream>

using namespace std;

class Number
{
private:
    int value;

public:
    Number(int value) : value(value) {}

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

    friend ostream &operator<<(ostream& out, Number n)
    {
        out<<n.value;
        return out;
    }

    int getValue() { return value; }
};

#endif // NUMBER_H_INCLUDED
