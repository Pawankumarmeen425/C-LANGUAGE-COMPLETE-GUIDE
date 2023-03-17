#include<stdio.h>
#include<string.h>
int main (){
     char st[45] = "pawan";
     char st2[12] = "kumar";
     int val = strcmp(st,st2);  
    //  result will outcome on the bases of first mismetchaing element of the string
     printf("Now the val is %d",val);
return 0;
}