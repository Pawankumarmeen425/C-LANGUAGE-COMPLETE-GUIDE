;/*What will the followin line produce in a c program:
printf("%d%d%d\n",a,++a,a++); */
#include<stdio.h>

int main (){
    int a =5;
    printf("%d  %d  %d\n",a,++a,a++);
    /*compiler gcc parform argument in order right to left.
    so, first perform a++ = 5 then increment 6
         then  ++a increment 6 to 7 then print 7
          then perform a perform and print 7 
          thus result 7 7 5*/
return 0;
}