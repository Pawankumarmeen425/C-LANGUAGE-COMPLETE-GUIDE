/*write a program to print n natural numbers in reverse order*/
#include<stdio.h>

int main (){
    int num,i;
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf(":: %d natural number in reversed order is::\n",num);
    for ( i = num ; i ; i--)
    {
        printf("%d\n",i);
    }
return 0;
}