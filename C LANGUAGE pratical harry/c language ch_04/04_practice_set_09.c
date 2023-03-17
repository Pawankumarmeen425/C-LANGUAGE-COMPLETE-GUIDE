/*Repeat 8 using while loop*/
#include<stdio.h>

int main (){
    int i=0,num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    while (i<=num)
    {
        if(i==num){
            printf("%d\n",i);
            continue;
        }
        i++;
    }
    
return 0;
}