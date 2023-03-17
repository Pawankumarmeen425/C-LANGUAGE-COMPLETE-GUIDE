/*Passing 2-D array to a function*/
#include <stdio.h>
void display (int *p,int row,int col);
int main()
{
    int array[3][4] = {1, 2, 3, 4,
                       5, 6, 7, 8,
                       9, 0, 1, 6};

display(&array[0][0],3,4);
    return 0;
}
void display (int *p,int row,int col){
for (int i = 0; i < row; i++)
{
for (int j = 0; j < col; j++)
    {
      printf("%d ",*p);
      p++;
    }
    printf("\n");
}

}