/*Write down macro definitions for the following:
1. To find arithmetic mean of two numbers.
2. To find absolute value of a number.
3. To convert an uppercase alphabet to lowercase.
4. To obtain the bigger of two numbers.*/
#include<stdio.h>
#define MEAN(x,y)((x+y)/2.0)
#define ABVALUE(n)(n<0?n*-1:n)
#define TOLOWER(c)(c+32)
#define BIGGER(n1,n2,n3)(n1>n2?(n1>n3?n1:n3):(n2>n3?n2:n3))

int main (){
    int a,b,num,n1,n2,n3;
    float ch;
    // printf("Enter two number::\n");
    // scanf("%d%d",&a,&b);
    // float mean = MEAN(a,b);
    // printf("Arithematic mean of two number %d and %d is :: %f\n",a,b,mean);
    // printf("Enter the number to find bsolute number::\n");
    // scanf("%d",&num);
    // int ab_num =  ABVALUE(num);
    // printf("Absolute value of a number %d is : %d\n",num,ab_num);
    printf("Enter the upper case latter ::\n");
    scanf("%c",&ch);
    ch  = TOLOWER(ch);
    printf("Lower case latter = %c\n",ch);
    // printf("Enter the three number::\n");
    // scanf("%d%d%d",&n1,&n2,&n3);
    // int larg = BIGGER(n1,n2,n3);
    // printf("Largest number = %d\n",larg);
return 0;
}