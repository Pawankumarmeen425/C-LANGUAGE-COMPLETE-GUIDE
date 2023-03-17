#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr1, *ptr2;
    char ch;
    ptr1 = fopen("pawan.txt", "r");
    if (ptr1 == NULL)
    {
        printf("Cannot open source file");
        exit(1);
    }
    // exit function define in the stdlib.h header files

    ptr2 = fopen("pr2.txt", "w");
    if (ptr2 == NULL)
    {
        printf("Cannot open target file");
        fclose(ptr1);
        exit(2);
    }
    while ( ch!=EOF )
    {
    ch = fgetc (ptr1 ) ;
    fputc ( ch, ptr2 ) ;
    }
    fclose ( ptr1 ) ;
    fclose ( ptr2) ;
    return 0;
}