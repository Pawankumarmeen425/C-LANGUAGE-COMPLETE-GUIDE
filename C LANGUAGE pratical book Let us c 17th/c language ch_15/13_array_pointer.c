#include<stdio.h>

int main (){
    int num[] = {3,2,3,4,2};
    int *j = &num[0];
    for (int  i = 0; i < 5; i++)
    {
        printf("address = %d, element = %d\n",j,*j);
        j++;
    }
    
return 0;
}