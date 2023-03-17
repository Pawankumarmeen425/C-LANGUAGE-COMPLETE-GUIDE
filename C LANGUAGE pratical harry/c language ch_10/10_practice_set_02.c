/*Write a program to generate multiplation table of a given number in text formet.
Make sure that the file is readible and well formatted*/
#include<stdio.h>

int main (){
    FILE *ptr;
    int num;
    printf("Enter the number you want the multiplation table::\n");
    scanf("%d",&num);
    ptr = fopen("pr02_table.txt","w");
    fprintf(ptr,"::Multiplation Table of %d::\n",num);
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr,"%d x %d = %d\n",num,i,num*i);
    }
    fclose(ptr);
    printf("Successfully genereted table of %d to pr02_table.txt.\n",num);
return 0;
}