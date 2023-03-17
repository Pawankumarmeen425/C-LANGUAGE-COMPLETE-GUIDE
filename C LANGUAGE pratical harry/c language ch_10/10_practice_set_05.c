/*Write a program to modifiy a file containing an integer to double its value.
:For example in pre.file store 2 then new file store 4*/
#include <stdio.h>

int main()
{
    FILE *ptr1, *ptr2;
    int num;
    ptr1 = fopen("prac05_pre.txt", "r");
    ptr2 = fopen("prac05_new.txt", "w");
    fscanf(ptr1,"%d",&num);
    fprintf(ptr2,"%d",2*num);
    return 0;
}