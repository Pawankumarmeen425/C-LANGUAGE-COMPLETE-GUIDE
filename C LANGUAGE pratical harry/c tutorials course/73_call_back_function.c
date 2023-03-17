#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
void HellowordAndExecule(int(*fptr)(int,int)){
    printf("Hello User::\n");
    printf("Sum of 5 and 7 is %d\n",sum(5,7));
}
void GMAndExecule(int(*fptr)(int,int)){
    printf("Good Morning User::\n");
    printf("Sum of 5 and 7 is %d\n",sum(5,7));
}
int main()
{
int (*ptr)(int ,int);
ptr = sum;
HellowordAndExecule(ptr);
GMAndExecule(ptr);
    return 0;
}