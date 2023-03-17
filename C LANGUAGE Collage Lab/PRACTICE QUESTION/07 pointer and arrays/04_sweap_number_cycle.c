/*C Program Swap Numbers in Cyclic Order Using Call by Reference.*/
#include <stdio.h>
int sweap(int *, int *, int *);
int main()
{
    int num1, num2, num3;
    printf("Enter the three numbr repectivily::\n");
    scanf("%d%d%d", &num1, &num2, &num3);
    printf("::Values before sweaping::\n");
    printf("num1 = %d\nnum2 = %d\nnum3 = %d\n", num1, num2, num3);
    sweap(&num1, &num2, &num3);
    printf("::Values after sweaping::\n");
    printf("num1 = %d\nnum2 = %d\nnum3 = %d\n", num1, num2, num3);
    return 0;
}
int sweap(int *n1, int *n2, int *n3)
{
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=*n3;
    *n3=temp;
}