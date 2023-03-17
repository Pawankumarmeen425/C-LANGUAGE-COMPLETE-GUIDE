/*C Program to Copy String Without Using strcpy().*/
#include<stdio.h>
int xcopy(char* , char *);
int main (){
    char source[100],target[100];
    printf("Enter the string::\n");
    gets(source);
    xcopy(source,target);
    printf("source string = %s\n",source);
    printf("target string = %s\n",target);

return 0;
}
int xcopy(char* s , char * t){
    while (*s!='\0')
    {
        *t=*s;
        t++;
        s++;
    }
    *t = '\0';
    

}