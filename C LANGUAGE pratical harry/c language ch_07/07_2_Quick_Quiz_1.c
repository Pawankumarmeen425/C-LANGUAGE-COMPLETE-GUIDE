#include<stdio.h>

int main (){
    int marks[5];
    for (int  i = 2; i < 7; i++)
    {
        printf("Enter the marks of student %d = ",i-1);
        scanf("%d",&marks[i]);
    }
    for (int i = 2; i <7; i++)
    {
        printf("Marks of %d student = %d\n",i-1,marks[i]);
    }
    
return 0;
}