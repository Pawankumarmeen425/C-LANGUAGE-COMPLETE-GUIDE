#include <stdio.h>
void worng_swap(int a, int b);
void swap(int *a, int *b);
int main()
{
    int x, y;
    printf("Enter the value of x:\n");
    scanf("%d", &x);
    printf("Enter the value of y:\n");
    scanf("%d", &y);
    printf("The value of x and y before swap is %d and %d\n", x, y);
    // worng_swap(x, y);/* Will not work due to  call by value*/
    swap(&x,&y);
    printf("The value of x and y after swap is %d and %d\n", x, y);


    return 0;
}
void worng_swap(int a, int b){
    int temp;
    temp= a;
    a=b;
    b=temp;
}
void swap(int *a,int *b){
    int temp;
    temp= *a;
    *a=*b;
    *b=temp;
}