#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#define N 100

void print1()
{
    printf("1");
}

void print2()
{
    printf("2");
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char *text;
    char replacment[32];
    while(1)
    {
        char answer[N];
        gets(answer);
        if(answer[0] == 'ä')
            print1();
        else if(answer[0] == 'í')
            print2();
        printf("\n");
    }

   // char s[N];
    //gets(s);
   // printf("\n\n");
    //shifr(s);
    return 0;
}
