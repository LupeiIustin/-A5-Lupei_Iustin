#include "Math.h"
#include <iostream>

using namespace std;

int main()
{
    Math m;

    cout << Math::Add(1, 2) << endl;
    cout << Math::Add(1, 2, 3) << endl;
    cout << Math::Add(2.0, 2.1) << endl;
    cout << Math::Add(5.0, 6.0, 4.0) << endl;
    cout << Math::Mul(1, 2) << endl;
    cout << Math::Add(5, 1, 2, 3, 4, 5) << endl;
    cout << Math::Add("poo", "lab") << endl;
}