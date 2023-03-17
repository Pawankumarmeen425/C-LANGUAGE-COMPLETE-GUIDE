/*Write a program to read a text file character by character and write its content
 twice in a seprate file*/
 #include<stdio.h>
 
 int main (){
     FILE *ptr1;
     FILE *ptr2;
     ptr1 = fopen("a.text","r");
     ptr2 = fopen("b.text","w");
     char c = fgetc(ptr1);
     while (c!=EOF)
     {
        //  fputc(c,ptr2);
        //  fputc(c,ptr2);
         fprintf(ptr2,"%c%c",c,c);
         c = getc(ptr1);
     }
     
 return 0;
 }