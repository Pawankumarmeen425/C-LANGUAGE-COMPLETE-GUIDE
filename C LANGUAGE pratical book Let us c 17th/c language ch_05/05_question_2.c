/*Write a program to print out all Armstrong numbers between 1 and
500. If sum of cubes of each digit of the number is equal to the
number itself, then the number is called an Armstrong number. For
example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ).*/
#include<stdio.h>

int main (){
    int i=1,sum ,d1,d2,d3,num;
    printf("***armstrong number between 1 to 500***\n");
    while (i<=2000)
    {
        d3=i%10;
        num=i/10;
        d2=num%10;
        d1=num=num/10;
        sum=(d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3);
        if (sum==i)
        {
            printf("%d \n",i);
        }
        
        i++;
    }
    
return 0;
}