/*Write a program containnig function which  count the number of positive interger in an 
array*/
#include<stdio.h>

int main (){
    int array[20];
    int n=0;
    for (int  i = 0; i < 20; i++)
    {
        printf("Enter the %d element of the array = ",i+1);
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < 20; i++)
    {
        if (array[i]>0)
        {
            n = n+1;
        }
        
    }
    printf("Total number of positive integer in array = %d",n);
    
return 0;
}