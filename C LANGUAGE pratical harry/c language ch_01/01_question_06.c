/*Paper of size A0 has dimensions 1189 mm x 841 mm. Each
subsequent size A(n) is defined as A(n-1) cut in half parallel to its
shorter sides. Thus paper of size A1 would have dimensions 841
mm x 594 mm. Write a program to calculate and print paper sizes
A0, A1, A2, … A8.*/

#include <stdio.h>

int main()
{
    float a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r;
    // Enter the dimension of the paper A0.
    printf("Enter the length of paper A0=");
    scanf("%f", &a);
    printf("Enter the breadth of paper A0=");
    scanf("%f", &b);

    c = b;
    d = a / 2;
    printf("The dimenasion of paper A1 is %fmm*%fmm\n", c, d);
    /* Because paper cut in half parallel to its shorter sides.So longer(length) side make half and 
     shorter sides(breadth) don't change in next paper.In the next paper shorter side become length and  
     longer half side become breadth */
    e = d;
    f = c / 2;
    printf("The  dimension of paper A2 is %fmm*%fmm\n", e, f);
    g = f;
    h = e / 2;
    printf("The  dimension of paper A3 is %fmm*%fmm\n", g, h);
    i = h;
    j = g / 2;
    printf("The  dimension of paper A4 is %fmm*%fmm\n", i, j);
    k = j;
    l = i / 2;
    printf("The  dimension of paper A5 is %fmm*%fmm\n", k, l);
    m = l;
    n = k / 2;
    printf("The  dimension of paper A6 is %fmm*%fmm\n", m, n);
    o = n;
    p = m / 2;
    printf("The  dimension of paper A7 is %fmm*%fmm\n", o, p);
    q = p;
    r = o / 2;
    printf("The  dimension of paper A8 is %fmm*%fmm\n", q, r);

    return 0;
}