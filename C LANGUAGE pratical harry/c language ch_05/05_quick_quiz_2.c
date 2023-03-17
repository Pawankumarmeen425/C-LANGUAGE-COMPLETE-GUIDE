/* Use the library function to calculate the area of a squre with  side a.*/
#include<stdio.h>
int area(int a);
int main (){
    int side, c;
    printf("Enter the side of squre:\n");
    scanf("%d",&side);
    c=area (side);
    printf("The area of squre = %d",c);
return 0;
}
int area(int a)
{
    int c;
    c = a*a;
    return c;
}