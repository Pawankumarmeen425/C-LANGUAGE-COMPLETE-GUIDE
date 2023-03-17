/* If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits. (Hint: Use the
modulus operator ‘%’)*/

#include<stdio.h>

int main (){
    int num ,ed,an, sum=0;  /*ed=end digit,  an=avalabile number*/

    printf("Enter the five digit number \n");
    scanf("%d",&num);
    ed=num%10;/*5th digit */
    an=num/10;
    sum=sum+ed;

    ed=an%10; /*4th digit*/
    an=an/10;
    sum=sum+ed;

    ed=an%10;/*3rd digit */
    an=an/10;
    sum=sum+ed;

    ed=an%10;/*2nd  digit */
    an=an/10;
    sum=sum+ed;

    ed=an%10;/*1st digit */
    an=an/10;
    sum=sum+ed;

    printf("Sum of five digit number  %d is %d",num,sum);



return 0;
}