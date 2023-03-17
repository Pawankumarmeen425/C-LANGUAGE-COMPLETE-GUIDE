#include<stdio.h>

int main (){
      int x, y, max;
  printf("Enter two numbers\n");
  scanf("%d %d", &x , &y);
max=x>y?printf("Grater number is x"):printf("Grater number is y");
return 0;
}