/*Create an array of 10 numbers verifing using pointer arithmetic that (ptr+2) points to 
 the third element where ptr is a pointer pinting to the first element of the array*/
#include<stdio.h>

int main (){
    int array[10];
    // int *ptra = &array[0] ;
            /*OR*/
    int *ptra = array;
    ptra = ptra+2;
    if (ptra == &array[2])
    {
        printf("These point to the same location in memory\n");
    }
    else{
        printf("These do not point to the same location in memory\n");
    }
    
return 0;
}