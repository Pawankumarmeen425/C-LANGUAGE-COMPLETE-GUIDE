#include<stdio.h>
void printarray(int *ptr, int n);
int main (){
    int arr[] = {3,23,4,54,3,434,23};
printarray(arr,7);
printf("%d",arr[3]);
return 0;
}
void printarray(int *ptr, int n)
{
for (int  i = 0; i < n; i++)
{
    printf("The vlaue of element %d = %d \n",i+1,ptr[i]);
}
ptr[3]=235;
}
