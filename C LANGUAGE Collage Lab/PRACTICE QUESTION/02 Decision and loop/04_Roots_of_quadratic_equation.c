/*C Program to find roots of a Quadratic Equation*/
#include<stdio.h>
#include<math.h>
int main (){
    int a,b,c,d;
    float e,x1,x2;
    //  Quadratic Equation = ax^2+bx+c    
    // Quadratic roots = (α, β) = {-b ± √(b2 – 4ac)}/2a
printf("Enter the values of a,b and c::\n");
scanf("%d%d%d",&a,&b,&c);
d = (b*b-4*a*c);
e = pow(d,0.5);
x1= (-b+e)/2*a;
x2= (-b-e)/2*a;
printf("Roots of quardatic equation are %f and %f.\n",x1,x2);
return 0;
}