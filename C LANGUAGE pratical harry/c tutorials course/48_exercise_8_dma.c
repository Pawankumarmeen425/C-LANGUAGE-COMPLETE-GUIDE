/*
PVT company manage the deatils ofother companies employee.
Employee id can be of any length and it can contain any character
For 3 employee , you have to take length of the id ad input in a length variable 
Then you haave to take employee id as an input display it on screen.
Store the employee id in a character array which is allocated dynamically.
You have to create only one character array dynamically */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *ptr;
    int length;
    int noe;
    printf("Enter the number of employee::\n");
    scanf("%d", &noe);
    for (int i = 0; i < noe; i++)
    {
        printf("\nEmployee %d::Enter the length of your employee id::\n", i + 1);
        scanf("%d", &length);
        ptr = (char *)malloc(length * sizeof(char));
        printf("Enter your employee id::\n");
        scanf("%s",ptr);
        printf("Your employee id is :: %s\n",ptr);
        free(ptr);
    }

   
    return 0;
}