#include "Math.h"

int Math::Add(int a, int b)
{
    return a + b;
}

int Math::Add(int a, int b, int c)
{
    return a + b + c;
}

int Math::Add(double a, double b)
{
    return a + b;
}

int Math::Add(double a, double b, double c)
{
    return a + b + c;
}

int Math::Mul(int a, int b)
{
    return a * b;
}

int Math::Mul(int a, int b, int c)
{
    return a * b * c;
}

int Math::Mul(double a, double b)
{
    return a * b;
}

int Math::Mul(double a, double b, double c)
{
    return a * b * c;
}

int Math::Add(int count, ...)
{
    va_list l;
    int sum = 0;

    va_start(l, count);

    for (int i = 0; i < count; i++)
    {
        sum += va_arg(l, int);
    }

    va_end(l);

    return sum;
}

char* Math::Add(const char* a, const char* b)
{
    if (a == nullptr || b == nullptr)
        return nullptr;

    char* c = new char[strlen(a) + strlen(b) + 1];

    strcpy(c, a);
    strcat(c, b);

    return c;
}