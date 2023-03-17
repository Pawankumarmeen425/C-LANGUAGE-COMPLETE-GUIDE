#include<stdio.h>

int main (){
    FILE *fptr;
    int num =45;
    fptr = fopen("genereted.txt","w");
    fprintf(fptr,"The number is %d\n",num);
    fprintf(fptr,"Thanks for using fprintf\n");
    fclose(fptr);
return 0;
}