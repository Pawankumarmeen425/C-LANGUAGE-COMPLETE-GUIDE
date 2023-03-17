/*In digital world colors are specified in Red-Green-Blue (RGB) format,
with values of R, G, B varying on an integer scale from 0 to 255. In
print publishing the colors are mentioned in Cyan-Magenta-YellowBlack (CMYK) format, with values of C, M, Y, and K varying on a real scale from 0.0 to 1.0. Write a program that converts RGB color to
CMYK color as per the following formulae:
White = Max(Red / 255,Green / 255, Blue / 255)
Cyan=(white-Red/255)/White
Magenta = (White - green/255)/White
Yellow = (White - Blue/255)/White 
Black= 1-White
Note that if the RGB values are all 0, then the CMY values
are all 0 and the K value is 1.
*/
#include <stdio.h>

int main()
{
    float R, G, B;
    float C, M, Y, K;

    printf("Enter the value of Red, Green and Blue Colour(Varing from 0 to 255)::\n");
    scanf("%f%f%f", &R, &G, &B);
    if (R == 0 && G == 0 && B == 0)
    {
        C, M, Y = 0;
        K = 1;
    }
    R = R / 255;
    G = G / 255;
    B = B / 255;
    printf("%f%f%f\n", R, G, B);
   float max = R;

    if (G > max)
    {
        max = G;
    }
    if (B > max)
    {
        max = B;
    }

    float white = max;
    printf("%f", white);
    C = (white - R) / white;
    M = (white - G) / white;
    Y = (white - B) / white;
    K = 1 - white;
    printf("Digital Word Cloour in CMYK = %f %f %f %f", C, M, Y, K);
    return 0;
}