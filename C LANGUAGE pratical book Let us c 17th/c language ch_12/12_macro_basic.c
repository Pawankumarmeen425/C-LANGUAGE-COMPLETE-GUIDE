#include<stdio.h>
#define HLINE(n) for(int i;i<n;i++)\
printf("%c",i);

int main (){
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);;
    HLINE(n);
return 0;
}