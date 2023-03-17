#include<stdio.h>

int main (){
    //  int x =6,y;
    // y= x++;  /*  here firs of all y assiagn x perform because post increment priorty is last
    // so y = x
    // then x++ ececute*/
    // printf("%d\n%d", x,y);
int x=6,y;
y = ++x;/*here due to pre increment 
firs ++x perform then  y assiagn ++x execute*/  

printf("%d \n %d", x,y);

return 0;
}