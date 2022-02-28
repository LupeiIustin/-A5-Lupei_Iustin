#include "NumberList.h"

void NumberList::Init()
{
    count = 0;
}

bool NumberList::Add(int x)
{
    if (count < 10)
    {
        this->numbers[count++] = x;
        return true;
    }

    return false;
}

void NumberList::Sort()
{
    bool can_cont;

    
        

        for (int i = 0; i < count - 1; i++)
            for (int j = i + 1; j < count; j++)
            {
                if (numbers[i] > numbers[j])
                {
                    int tmp = numbers[i];
                    numbers[i] = numbers[j];
                    numbers[j] = tmp;
                   
                }
            }


}

void NumberList::Print()
{
    for (int i = 0; i < count; i++)
    {
        cout << numbers[i] << ' ';
    }

    cout << endl;
}