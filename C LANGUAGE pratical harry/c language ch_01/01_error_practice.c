#include <stdio.h>
int main()
{
    //      problem are that in the one variables entered other variables
    //      Right program are fallow.
        int a, c;
        float b;
        a = 265657;
        b = 3.24;
        c = a+b*b-35;
        printf("%d",c);

    // // calction of average
    // int a = 35;  float b = 3.24;
    // printf("%d\n%f\n%d\n", a, b+1.5,235);
    // no error found.

// que.3
    int a, b, c;
    printf("enter the value of a\n", a);
    scanf("%d", &a);
    printf("enter the value of b\n", b);
    scanf("%d", &b);
    printf("enter the value of c\n", c);
    scanf("%d", &c);

    printf("multipaly the values %d", a * b * c );


    // que.4
    // int m1, m2, m3;
    // printf("Enter the value of marks in 3 subjects");
    // scanf("%d%d%d",&m1, &m2, &m3);
    // printf("you are entered %d\n%d\n%d",m1, m2,m3);
    return 0;
}