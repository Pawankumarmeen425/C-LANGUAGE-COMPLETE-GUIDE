/*Function with argument and whitouot return value*/
#include<stdio.h>
void printstar (int n);
void printstar (int n)
{
    printf("Enter how many star you want print:\n");
    scanf("%d",&n);
    for (int i = 0; i <= n; i++)
    {
       printf("%c \t",'*');
    }
    
}
int main (){
    int n;
     printstar ( n);
return 0;
}