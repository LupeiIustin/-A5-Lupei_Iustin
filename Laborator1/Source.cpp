#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

using namespace std;

int my_atoi(const char* s)
{
    int tmp = 0;

    for (int i = 0; i < strlen(s); i++)
        tmp = tmp * 10 + (s[i] - '0');

    return tmp;
}


int main()
{
    int sum = 0;
    char str[100];

    FILE* stream;
    stream = fopen("ini.txt", "r");

    while (fscanf(stream, "%s", str) != EOF)
    {
        int tmp = my_atoi(str);

        sum += tmp;
    }

    fclose(stream);

    printf("%d\n", sum);
}
