#include<stdio.h>

int main (){
    FILE *ptr =NULL;
    char string[64];
    ptr = fopen("myfile.txt","r");
    fscanf(ptr,"%s",string);
    printf("The content of the files is::\n%s\n",string);
    // Writting a files
         ptr = fopen("myfile.txt","w");
         printf("Enter the string which you want to print in the files::\n");
return 0;
}