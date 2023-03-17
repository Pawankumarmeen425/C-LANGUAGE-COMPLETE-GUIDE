#include <stdio.h>
int main()
{
    struct node
    {
        int a;
        int b;
        int c;
    };
    struct node s = {3, 5, 6};
    struct node *pt = &s;
    printf("%d\n", ((int)pt + 1));
    return 0;
}