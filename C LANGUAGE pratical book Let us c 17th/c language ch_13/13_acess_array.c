#include<stdio.h>

int main (){
    int num[]={21,1,2,23,12,42,12,23};
    int *j;
    j=&num[0];
    for (int i = 0; i < 8; i++)
    {
        printf("address = %d element = %d\n",j,*j);
        j++;
    }
    
return 0;
}