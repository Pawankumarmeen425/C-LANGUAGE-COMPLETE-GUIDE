#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char mainlist[6][15] = {"Pawan", "Rakesh", "Rohan", "Shubham", "Lokesh", "Lovish"};
    char name[20];
    printf("Enter your name::\n");
    scanf("%s", name);
    for (int i = 0; i < 6; i++)
    {
        int val = strcmp(&mainlist[i][0],name);
        if (val == 0)
        {
            printf("Welcome,You can enter the place\n");
            exit(0);
        }
    }
    printf("Sorry, you are a trespasser::");

    return 0;
}