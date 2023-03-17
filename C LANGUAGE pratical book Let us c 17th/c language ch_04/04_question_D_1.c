/*If the three sides of a triangle are entered through the keyboard,
write a program to check whether the triangle is isosceles,
equilateral, scalene or right angled triangle*/

/* Scalene Triangle	          Isosceles Triangle	          Equilateral Triangle
All three sides are unequal 	 Any two sides are equal	    All three sides are equal
All three angles are different   Angles opposite to equal       All three angles equal to 
                                 sides are equal	                60 degree  */
/*right angle triangle according to the pothagoras parme*/
#include <stdio.h>

int main()
{
    float s1, s2, s3;
    printf("**Enter the three sides of the triangle**\n");
    scanf("%f%f%f", &s1, &s2, &s3);
    if (s1 != s2 && s2 != s3 && s3 != s1)
    {
        if ((s1 * s1 == s2 * s2 + s3 * s3) || (s2 * s2 == s1 * s1 + s3 * s3) || (s3 * s3 == s1 * s1 + s2 * s2))
        {
            printf("Triangle is a Right angle triangle.");
        }
        else
        {
            printf("Triangle is Scalene Triangle. ");
        }
    }
    else if (s1 == s2 && s2 == s3)
    {
        printf("Triangle is Equilateral Triangle.");
    }

    else if ((s1 == s2 && s2 != s3) || (s1 == s3 && s3 != s2) || (s2 == s3 && s2 != s1))
    {
        printf("Triangle is Isosceles Triangle.");
    }

    return 0;
}
