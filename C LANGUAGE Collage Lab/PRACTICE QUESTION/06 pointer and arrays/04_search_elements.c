/*Write a program to search the given element by using linear search*/
#include<stdio.h>

int main (){
    int array[] = {1,4,5,2,8,-7,0,23,14,-3,6,-2,12,4,86};
    int num;
    printf("Enter the number which you want to search::\n");
    scanf("%d",&num);
    int i;
    for (i = 0; i < 15; i++)
    {
        if (num==array[i])
        {
           printf("Number %d is avalible in the array::\n",num);
           break;
        }
        
    }

    if (num!=array[i])
    {
        printf("Number %d is not avalible in the array::\n",num);
    }
    
    
return 0;
}