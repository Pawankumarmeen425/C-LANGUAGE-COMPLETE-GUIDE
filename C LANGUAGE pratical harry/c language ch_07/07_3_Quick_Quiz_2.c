
#include<stdio.h>

int main (){
int a = 6,b=4,c;
int *ptra = &a;
int *ptra2 = &b;
printf("The vlaue of address of a = %d\n ",ptra);
printf("The vlaue of address of b = %d\n ",ptra2);
c=ptra-ptra2;
printf("The vlaue of interger = %d\n", c);
ptra++;
ptra2--;
printf("The vlaue of address of a after increment or decrement = %d\n ",ptra);
printf("The vlaue of address of b after increment or decrement = %d\n ",ptra2);
c=ptra-ptra2;
printf("The vlaue of interger = %d\n", c);
ptra =ptra2;
printf("The vlaue of address of a = %d\n ",ptra);
return 0;
}