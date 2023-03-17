/*Write your version of strlen function from  <string.h>*/
#include<stdio.h>
int strlen(char *st);
int main (){
    char st[]="pawan";
    int l = strlen(st);
    printf("The length of the string is %d",l);
return 0;
}
int strlen(char *st)
{
    int length = 0;
    while (*st!='\0')
    {
        length++;
        st++;
    }
    return length;
}