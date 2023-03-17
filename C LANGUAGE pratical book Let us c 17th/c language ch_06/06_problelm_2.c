/* Write  a program to add first seven terms of the following series using a for loop.
     1/1!+2/2!+3/3!+4/4!+......*/

     #include<stdio.h>
     
     int main (){
         int i; 
         float sum=0,fact=1.0;
         for ( i = 1; i <=7; i++)
         {
             fact=fact*i;
             sum= sum+i/fact;
         }
         printf("Sum of first seven terms = %f",sum);
     return 0;
     }