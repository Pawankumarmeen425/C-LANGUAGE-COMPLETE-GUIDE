/*Write a program to chaeck weather a given number is character is present or not in the 
stirng*/
#include<stdio.h>
int occurence (char*,char);
int main (){
    char st[] = "pawankumarmeena";
    char c;
    printf("Enter character:\n");
    scanf("%c",&c);
    int occ=occurence(st,c);
    printf("Occurence of characer %c is %d:\n",c,occ);
return 0;
}
int occurence (char* st,char c){
    int count = 0;
    while (*st!='\0')
    {
        if (*st==c)
        {
           count++;
        }
        st++;
    }
    if (count==0)
    {
        printf("Entered character is not avaalable in the string\n");
    }
    else{
        printf("Entered character is  avaalable in the string\n");
    }
    return count;
}