/*  Check weather a character  is captial latter, a small case latter,a digit or a special symbol */
/*   ASCII values of various character:
    CHARACTER          ASCII VALUE
   A-Z                65-90
   a-z                97-122
   0-9                48-57
   specific symbol    0-47, 58-64, 91-96, 123-127    */

   #include<stdio.h>
   
   int main (){
       char ch;
       printf("enter a character :\n");
       scanf("%c",&ch);
       if(ch>=65&&ch<=90){
           printf("The character is  uppercase letter");
       }
       else if (ch>=97&&ch<=122){
           printf("The character is lowercase latter");
       }
       else if (ch>=48&&ch<=57){
           printf("The character is digit ");
       }
       else{
           printf("The character is specific symbol");
       }
   return 0;
   }