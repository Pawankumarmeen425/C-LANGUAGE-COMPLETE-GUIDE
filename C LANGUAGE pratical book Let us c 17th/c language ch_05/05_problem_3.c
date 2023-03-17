/*Two number are entered through the keyword, write a program to find vlaue of one number raised to the another
number*/
#include<stdio.h>

int main (){
    int y , i;
    float x,power;
    printf("Enter two number:\n");
    scanf("%f\n%d",&x,&y);
    power=i=1;
    while (i<=y)
    {
        power=power*x;
        i++;
    }
    printf("%f to the power %d is: %f",x,y,power);

return 0;
}