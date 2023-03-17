 #include<stdio.h>
 
 int main (){
     int a =9;
     a=5;   /*we can change value  of a after declair*/
      const int b=7;
    //   b=8;    /* cannot do this since b is a constant it's vlaue always remain constant */

     printf("vlaue of a is %d",a);
     printf("the vlue of b is %d",b);
 return 0;
 }