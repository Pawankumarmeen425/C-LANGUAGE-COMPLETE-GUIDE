#include<stdio.h>

int main (){
    
    // int marks[5];
    // for (int i = 0; i <5; i++)
    // {
    //     printf("Enter the value  of %d elsement of the array\n",i);
    //     scanf("%d",&marks[i]);
    // }
    // for (int i = 0; i <5; i++)
    // {
    //     printf("The value of %d element of the the array is %d \n",i,marks[i]);
    // }
    int marks[]={23,12,122,1,2};
    /*In the declaration with initialize array of 1d size not compulsary*/
    for (int i = 0; i <5; i++)
    {
        printf("The value of %d element of the the array is %d \n",i,marks[i]);
    }
    
return 0;
}