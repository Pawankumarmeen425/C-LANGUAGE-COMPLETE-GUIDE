#include<stdio.h>

int main (){
    int *array[4];
    int i =23, j=34, k=65, l=234;
    array[0]=&i;
     array[1]=&j;
     array[2]=&k;
     array[3]=&l;
     for (int m = 0; m < 4; m++)
     {
        printf("%d\n",array[m]);
     }
     

return 0;
}