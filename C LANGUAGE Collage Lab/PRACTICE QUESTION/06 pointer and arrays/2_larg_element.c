/*C Program to Find Largest Element of an Array.*/
#include<stdio.h>

int main (){
    int array[10],larg=0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the %d elements of the array:\n",i+1);
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (array[i]>larg)
        {
            larg=array[i];
        }
        
    }
    printf("Largest number of the array is = %d\n",larg);

    
return 0;
}