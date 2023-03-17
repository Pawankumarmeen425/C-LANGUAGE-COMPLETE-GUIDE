/*Write a program using pointers to find the smallest number in an
array of 25 integers.*/
#include<stdio.h>
int small (int *j,int n);
int main (){
    int *j;
    int array[25];
   
    for (int i = 0; i < 25; i++)
    {
        printf("Enter the %d element of the array::\n",i+1);
        scanf("%d",&array[i]);
    }
    small(array,25);
    

return 0;
}
int small (int *j,int n)
{
    int smal=*j;
for (int i = 0; i < n; i++)
{
   if (*j<smal)
   {
       smal = *j;
   }
    j++;
}
printf("\n Smallest number of the array is : %d",smal);
}