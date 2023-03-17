/*Try problem 3 using call by value and verify that it doesn't  change the value of 
  the said variable*/
#include <stdio.h>
void change(int num);
int main()
{
    int num;
    printf("Enter the value of number:\n");
    scanf("%d", &num);
    change(num);
printf("New value of number is %d",num);
    return 0;
}
void change(int num)
{
    num = num * 10;
}
