/*The x and y coordinate of 10 different points are entered through the the keyword.
Write a program to find the distance fo last point from the first point(Sum of distance
between consecetive points) */
#include <stdio.h>
#include <math.h>
int main()
{
    int array[10][2];
    float dis[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter coordiate of the %d point::\n", i + 1);
        for (int j = 0; j < 2; j++)
        {
            if (j == 0)
            {
                printf("x = ");
                scanf("%d", &array[i][j]);
            }
            else
            {
                printf("y = ");
                scanf("%d", &array[i][j]);
            }
        }
    }
    /*Distance between two point (x1,y1) and (x2,y2) = sqrt((x2-x1)2+(y2-y1)2) */
    for (int i = 0; i < 10; i++)
    {

        int x1, x2, y1, y2;
        x1 = array[i][0];
        x2 = array[i + 1][0];
        y1 = array[i][1];
        y2 = array[i + 1][1];
        dis[i] = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        if (i < 9)
        {
            
            printf("Distance between point %d and %d = %f \n", i + 1, i + 2, dis[i]);
        }
    }
    float total = 0;
    for (int i = 0; i < 9; i++)
    {
        total = total+dis[i];
    }
    printf("Distance of last point from the first point = %f\n",total);

    return 0;
}