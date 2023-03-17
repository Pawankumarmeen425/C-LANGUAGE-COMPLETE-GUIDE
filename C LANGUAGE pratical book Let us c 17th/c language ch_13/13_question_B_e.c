/*Write a program which performs the following tasks:
- Initialize an integer array of 10 elements in main( )
- Pass the entire array to a function modify( )
- In modify( ) multiply each element of array by 3
- Return the control to main( ) and print the new array elements
in main( )*/
 #include<stdio.h>
 int modify(int *array,int n);
 int main (){
     int array[10];
     for (int i = 0; i < 10; i++)
     {
         printf("Enter the %d element of the array::\n",i+1);
         scanf("%d",&array[i]);
     }

   modify(&array[0],10);
   for (int i = 0; i < 10; i++)
   {
     printf("New value of the %d element of the array = %d\n",i+1,array[i]);
   }
   
     
 return 0;
 }
  int modify(int *array,int n){
    for (int i = 0; i < n; i++)
    {
      *array = 3**array;
      array++;

    }
    return 0;
  }