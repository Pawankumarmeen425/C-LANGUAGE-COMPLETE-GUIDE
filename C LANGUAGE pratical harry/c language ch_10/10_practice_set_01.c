/*Write a program to read three integer from a file*/
#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("prac01.txt", "r");
    int n1, n2, n3;
    fscanf(ptr, "%d %d %d", &n1,&n2,&n3);
    fclose(ptr);
    printf("First interger is %d\n",n1);
    printf("Second integer is %d\n",n2);
    printf("Third integer is %d\n",n3);

    return 0;
}