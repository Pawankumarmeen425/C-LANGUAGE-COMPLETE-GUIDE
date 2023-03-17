/*Paper of size A0 has dimensions 1189 mm x 841 mm. Each
subsequent size A(n) is defined as A(n-1) cut in half parallel to its
shorter sides. Thus paper of size A1 would have dimensions 841
mm x 594 mm. Write a program to calculate and print paper sizes
A0, A1, A2, … A8.*/

#include <stdio.h>

int main()
{
    // float a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r;
    float a, b, small, big, small1;
    printf("***Enter the dimension of the paper A0 ****\n");
    printf("Enter the length of paper A0=");
    scanf("%f", &a);
    printf("Enter the breadth of paper A0=");
    scanf("%f", &b);
    small = a;
    big = b;
    if (a > b)
    {
        small = b;
        big = a;
    }
    for (int i = 1; i <= 8; i++)
    {
        printf("The dimenasion of paper A%d is %fmm*%fmm\n", i, small, big / 2);
        small1 = small;
        small = big / 2;
        big = small1;
    }

    return 0;
}