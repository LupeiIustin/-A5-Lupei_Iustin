#include "NumberList.h"

int main()
{
    NumberList l;

    l.Init();

    for (int i = 15; i > 0; i--)
        l.Add(i);

    l.Sort();
    l.Print();
}