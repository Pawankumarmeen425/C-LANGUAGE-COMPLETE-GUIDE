/*Write a function slice( ) to slice a string . It should change the original string such that
 it is now the sliced sting. Take m and n as the start and ending position for slice*/
#include <stdio.h>
int slice(char *st, int m, int n);

int main()
{
    char st[23] = "Pawankumar";
    slice(st, 1, 6);
    printf("%s", st);
    return 0;
}
int slice(char *st, int m, int n)
{
    int i = 0;
    while ((m + i) < n)
    {
        st[i] = st[m + i];
    }
    st[i] = '\0';
    return 0 ;
}