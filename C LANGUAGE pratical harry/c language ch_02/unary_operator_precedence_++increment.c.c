#include<stdio.h>

int main (){
    // ++ increment operators
    int x = 3; 
    x++; /*x = x+1  post incerement*/
    printf("value of  x is %d\n",x);
    ++x;  /* x = x+1  pre increment*/
    printf("then value of x is %d",x);

return 0;
}

// post intcrement and pre increment both are work same .
// But priorty of post increment  is last in the all operators though assignmet operators.
// and pre increment due to unary operators this priorty is first in all operators.