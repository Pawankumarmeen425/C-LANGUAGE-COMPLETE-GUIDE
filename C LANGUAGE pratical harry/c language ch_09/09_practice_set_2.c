/*Write a function sum vector which returns the sum  of two vector passed to it.
the vector must be two dimensional*/
#include<stdio.h>
struct vector{
    int x;
    int y;
};
int sum(struct vector v1,struct vector v2);
int main (){
    struct vector v1,v2;
    v1.x = 3;
    v1.y = 6;
    printf("x dim is %d and y dim is %d:::\n",v1.x,v1.y);

    v2.x = 8;
    v2.y = 5;
    printf("x dim is %d and y dim is %d:::\n",v2.x,v2.y);
   sum (v1,v2);
    

return 0;
}
int sum(struct vector v1,struct vector v2)
{
printf("x dim of result  is %d and y dim result is %d:::\n",v1.x+v2.x,v1.y+v2.y);

}