#include <stdio.h>
int func1(int array[], int n);
void func2(int *ptr, int n);
int main()
{
    int arr[] = {2, 5, 1, 7, 4};
    printf("The value at 0 is %d\n", arr[0]);
    func1(arr, 5);
    printf("The value at 0 is %d\n\n", arr[0]);
    printf("NOw impletition start in the fuction 2::\n");
    func2(arr, 5);
    func2(arr, 5);

    return 0;
}
int func1(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d element of the array is %d\n", i, array[i]);
    }
    array[0] = 3432;
    /*  Very important point that if you change any value of array in the other function , it get reflected 
   in main function because in the function calling passing base address of the array and in the called function 
   argument change automatically in pointer*/
}
void func2(int *ptr, int n)
{
 
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d element of the array is %d\n", i, *ptr);
        ptr++;
    }
      
}