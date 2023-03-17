#include<stdio.h>

int main (){
    printf("File Name is %s\n",__FILE__);
    printf("Today's Datr is %s\n",__DATE__);
    printf("Time Now is %s\n",__TIME__);
    printf("Line no of the program %d\n",__LINE__);
    printf("ANSI : %d\n",__STDC__);
return 0;
}