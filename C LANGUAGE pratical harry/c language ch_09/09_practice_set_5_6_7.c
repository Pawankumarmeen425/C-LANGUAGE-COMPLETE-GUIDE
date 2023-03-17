/*Write a program with a structer repersenting a complex number*/
#include <stdio.h>
typedef struct complex
{
    int real;
    int imagenary;
} comp;
void display(comp c);
int main()
{

    comp cnum[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real value for %d num::\n", i + 1);
        scanf("%d", &cnum[i].real);
        printf("Enter the imagenary value for %d num::\n", i + 1);
        scanf("%d", &cnum[i].imagenary);
    }
    for (int i = 0; i < 5; i++)
    {
        display(cnum[i]);
    }

    return 0;
}

void display(comp c)
{
    printf("the value of real part is :: %d\n", c.real);
    printf("the value of imagenary part is :: %d\n", c.imagenary);
}