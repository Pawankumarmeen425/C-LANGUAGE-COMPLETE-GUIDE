#include<stdio.h>

int main (){
    int x=5,y;
    y=!x>4;  /*x>4 is true so result is 1
    !true = false  so result is 0*/
    printf("%d\n",y);

    y=x>4&&x<10;  /*true&&true is always true ,so result is 1*/
    printf("%d\n",y);

y=x<4||x<10;
printf("%d\n",y);
return 0;
}