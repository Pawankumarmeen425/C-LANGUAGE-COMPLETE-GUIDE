 #include<stdio.h>
 
//   "sum" is a function which takes a and b as input and returns an intege as an output
 int sum(int a, int b);  /*Function prototype declaration*/
 int main (){
     int c,num1,num2;
     printf("Enter the value of a: \n");
     scanf("%d",&num1);
     printf("Enter the value of b:\n");
     scanf("%d",&num2);
     c = sum(num1,num2);/*Function call*/
     printf("The value of c = %d\n",c);
 return 0;
 }
 int sum(int a, int b){/*Function definition*/
     int result;
     result = a+b;
     return result;
 }