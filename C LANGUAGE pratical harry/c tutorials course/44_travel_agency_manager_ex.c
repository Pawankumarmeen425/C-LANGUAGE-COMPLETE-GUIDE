/*
You manage a travel agency and you want your n drivers to input their following deatils::
1.Name
2.Driving licance number
3.Route
4.Kms
Your program should be print deatils of the drivers in a beautiful fashion.
User */
#include <stdio.h>
typedef struct manage
{
    char name[50];
    int dln; /*Driving Licance Number*/
    char route[100];
    float kms;
} m;
int main()
{
    m tra[20];
    int num;
    printf("Enter the number of drivers::\n");
    scanf("%d", &num);
    printf("********Taking deatils of the drivers********\n");
    for (int i = 0; i < num; i++)
    {
        printf("Enter the deatils of %d person::\n", i + 1);
        printf("Enter the Name :: \n");
        fflush(stdin);
        gets(tra[i].name);
        printf("Enter the driving licance Number :: \n");
        scanf("%d", &tra[i].dln);
        printf("Enter the route :: \n");
        fflush(stdin);
        gets(tra[i].route);
        printf("Enter the distance of the route :: \n");
        scanf("%f", &tra[i].kms);
    }
    printf("******Printing Deatils of the Drivers******\n");
    for (int i = 0; i < num; i++)
    {
        printf("\nDeatils of the %d person:\n", i + 1);
        printf("Name = %s\n", tra[i].name);
        printf("Driving Licance Number =%d\n", tra[i].dln);
        printf("Route = %s\n", tra[i].route);
        printf("Route Distance = %f\n", tra[i].kms);
    }

    return 0;
}