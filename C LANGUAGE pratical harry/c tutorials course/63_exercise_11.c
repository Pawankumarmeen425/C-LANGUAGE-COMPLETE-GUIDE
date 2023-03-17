/*Write a program to check weather a number is palindrom or not*/
#include <stdio.h>
int palindrom(int num)
{
    int revese = 0, rem;
    int org_num = num;
    while (num != 0)
    {
        rem = num % 10;
        revese = revese * 10 + rem;
        num = num / 10;
    }
    if (revese == org_num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    printf("Enter the number to check weather it is palindrom or not::\n");
    scanf("%d", &num);
    int result = palindrom(num);
    if (result == 1)
    {
        printf("%d number is a palindrom number\n", num);
    }
    else
    {
        printf("%d number is not  a palindrom number\n", num);
    }
    return 0;
}