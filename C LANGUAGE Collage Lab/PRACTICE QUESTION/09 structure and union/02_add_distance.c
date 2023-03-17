/*	C Program to Add Two Distances (in inch-feet) System Using Structures.*/
#include <stdio.h>
struct add_distance
{
    int inch;
    int feet;
};

int main()
{
    struct add_distance d[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the %d distance::\n", i + 1);
        printf("Feet = ");
        scanf("%d", &d[i].feet);
        printf("Inch = ");
        scanf("%d", &d[i].inch);
    }
    int add_inch = d[0].inch + d[1].inch;
    int add_feet = d[0].feet + d[1].feet;
while (add_inch>=12)
{
    add_feet++;
    add_inch=add_inch-12;
}

    printf("::Sum of Two distance::\n");
    printf("%d feet %d inch:\n",  add_feet,add_inch);

    return 0;
}