#include<stdio.h>

int main (){
    int i,j,sum;
    for ( i = 1; i < 5; i++)
    {
        for ( j = 1; j < 3; j++)
        {
            sum=i+j;
            printf("sum of %d and %d is = %d\n",i,j,sum);
        }
        
    }
    
return 0;
}