#include <stdio.h>
#include <stdlib.h>

int main()
{
    
// Use of Malloc
int*ptr;
int n;
printf("Enter the size of the array::\n");
scanf("%d",&n);
ptr = (int*)malloc(n*sizeof(int));
for (int  i = 0; i < n; i++)
{
    printf("Enter the %d element of the array::\n",i);;
    scanf("%d",&ptr[i]);

}
for (int i = 0; i < n; i++)
{
    printf("%d Element of the array is %d::\n",i,ptr[i]);
}







    return 0;
}