#include<stdio.h>

int main (){
    int marks[4];
    // int *ptra = &marks[0];
         /*OR*/
    int *ptra = marks;     
    for (int i = 0; i <4; i++)
    {
        printf("Enter the value of marks of student %d = ",i+1);
        scanf("%d",ptra);
        ptra++;
    }
    for (int  i = 0; i < 4; i++)
    {
        printf("Marks of student %d = %d\n",i+1,marks[i]);
    }
    
    
return 0;
}