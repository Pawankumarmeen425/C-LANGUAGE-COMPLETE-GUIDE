/*Write a program to print n natural numbers in reverse order*/

#include<stdio.h>

int main (){
    int i,n;
    printf("Enter the number \n");
    scanf("%d",&n);
    for ( i = n; i ; i--)    /* when i pass non zero value it is consider true and zero consider false*/ 
    {
        printf("%d\n",i);
    }
    
return 0;
}