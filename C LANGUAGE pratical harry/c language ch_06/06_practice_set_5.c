/*Write a program to print the value of  a variable i by using "pointer to pointer"
 type of variable*/
  #include<stdio.h>
  
  int main (){
      int i =8;
      int *j;
      int **k;
       j = &i;
       k=&j;
      printf("The vlaue of i is %d\n",**k);
  return 0;
  }