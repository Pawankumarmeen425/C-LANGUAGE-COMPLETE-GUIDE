/*Write your own version of stecpy function from <string.h>*/
#include<stdio.h>
void stecpy(char * ,char*);
int main (){
    char source[]="pawan kumar";
    char target[65];
  stecpy(source,target);
  printf("In the source %s \n",source);
   printf("In the target %s \n",target);
return 0;
}
void stecpy(char *s ,char* t)
{
while (*s!='\0')
{
    *t=*s;
    t++;
    s++;

}
*t='\0';
}