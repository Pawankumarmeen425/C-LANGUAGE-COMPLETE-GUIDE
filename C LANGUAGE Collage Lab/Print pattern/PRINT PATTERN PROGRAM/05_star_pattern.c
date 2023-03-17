/*C Program to print the pattern in the following way

* * * * * 
* * * *
* * * 
* *
*
                                */
#include<stdio.h>

int main (){
    int nol;
    printf("Enter the number of lines::\n");
    scanf("%d",&nol);
    for (int i = nol; i !=0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    
return 0;
}