#include<stdio.h>
int strcpy(char *,char *);
int main (){
    char st1[45]="Pawan";
    char st2[56];
    int l = strcpy(st1,st2);
    printf("IN the string st1 = %s \n",st1);
    printf("IN the string st2 = %s \n",st2);
return 0;
}
int strcpy(char * p,char * q)
{
     while (*p!='\0')
     {
         *q=*p;
         p++;
         q++;
     }
     *q='\0';
    //  return *q;
}