#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("putcdemo.txt", "w");
    // putc is use to take input character by character
    fputc('c', ptr);
    fputc('d', ptr);
    fputc('h', ptr);
    fputc('d', ptr);
    fprintf(ptr," ");
    fputc('r', ptr);
    fputc('m', ptr);
    fputc('p', ptr);
    fputc('s', ptr);
    fclose(ptr);
    return 0;
}