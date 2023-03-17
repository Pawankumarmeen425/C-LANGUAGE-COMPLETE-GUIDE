#include<stdio.h>

int main (){
    // sizeof() unary operators.
    // it use to find size of data type , variables, constant.
    int x, y,z;
    float k; 
    double d1;
    char ch;

    // x= sizeof(float);
    // x=sizeof(char);
    // x=sizeof(int);
    // x=sizeof(y);
    // x=sizeof(ch);


x=sizeof(4.23);  /*real concent consider by defoult double*/
y=sizeof('a');   /* charcater contant by defoult consider integer*/  /*/* according to  ASCII coding*/
z=sizeof(56);
printf("%d\n%d\n%d\n",x,y,z);

    // printf("%d",x);
return 0;
}