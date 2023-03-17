#include<stdio.h>
#include<string.h>
int main (){
     char st[45] = "pawan";
     char st2[12] = "kumar";
     strcat(st,st2);  /*in the strcat no space add autometically*/
     printf("Now the st is %s",st);
return 0;
}