/*C Program to Concatenate Two Strings.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char source[50], target[100];
    printf("Enter string in the source::\n");
    scanf("%s", source);

    printf("Enter string in the target::\n");
    scanf("%s", target);
    strcat(source,target);
    printf("String in the source and target after concatenate::\n");
    printf("In the source = %s\n", source);
    printf("In the target = %s\n", target);

    return 0;
}