/*Repeat problem 7 for  a custom input given by the user*/
#include <stdio.h>
void multable(int *array, int num, int n);
int main()
{
  int array[3][10];
  int n1, n2, n3;
  printf("Enter three number which you want to multiplation table:\n");
  scanf("%d%d%d", &n1, &n2, &n3);
  multable(array[0], n1, 10);
  multable(array[1], n2, 10);
  multable(array[2], n3, 10);
  return 0;
}
void multable(int *array, int num, int n)
{
  printf("\n\n***Multiplation Table of number %d:\n", num);
  for (int i = 0; i < 10; i++)
  {
    array[i] = num * (i + 1);
  }
  for (int i = 0; i < 10; i++)
  {
    printf("%d * %d = %d\n", num, i + 1, array[i]);
  }
}