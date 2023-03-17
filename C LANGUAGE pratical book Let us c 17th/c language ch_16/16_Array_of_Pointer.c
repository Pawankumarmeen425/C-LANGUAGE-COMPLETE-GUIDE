#include <stdio.h>

int main()
{
    char *name[] = {"Pawan", "Rakesh", "Rohan", "Shubham", "Lokesh", "Lovish"};
    char *temp;
    printf("Original Name at the positio of 3 and 5:: %s  %s\n", name[2], name[4]);
    temp = name[2];
    name[2] = name[4];
    name[4] = temp;
    printf("Name after the intercange:: %s  %s", name[2], name[4]);

    return 0;asdf 











    
}