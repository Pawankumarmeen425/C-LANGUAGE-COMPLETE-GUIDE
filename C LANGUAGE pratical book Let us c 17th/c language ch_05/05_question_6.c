/*Write a program to find the range of a set of numbers. Range
is the difference between the smallest and biggest number in
the list.*/
#include<stdio.h>

int main (){
    int i=1, son,num,num1=0,great,small;
    printf("Enter the set of numbers:\n");
    scanf("%d",&son);
    while (i<=son)
    {
        printf("Enter the number:\n");
        scanf("%d",&num);
        
     if (num>num1)
     {
         great=num;
     }
     
        num1=num;
        i++;
    }
    printf("%d    %d  \n",great,small);

return 0;
}