#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "pawan";
    char s2[] = "rakesh";
    char s3[45];
    puts(strcat(s1, s2));
    printf("The length of string s1 is %d\n", strlen(s1));
    printf("The length of string s2 is %d\n", strlen(s2));
    printf("The reversed string s1 is:%s\n", strrev(s1));
    printf("The reversed string s1 is:");
    
    puts(strrev(s2));
    
    // s3 = strcat(s1,s2);  WE can't compare string as this way.Solution for this
    strcpy(s3,strcat(s1,s2)) ;
    puts(s3);
printf("The strcmp for s1 and s2 returned %d\n",strcmp(s1,s2));
    return 0;
}