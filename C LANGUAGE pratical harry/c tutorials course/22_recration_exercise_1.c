/*
kms to miles
inches to foot 
cms to inches
pound to kgs
inches to meter

*/
#include <stdio.h>

int main()
{
    
    char input;
   float kmsToMiles = 0.621371;
   float inchesToFoot = 0.0833333;
   float cmsToInches = 0.393701;
   float poundToKgs = 0.453592;
   float inchesToMeters = 0.0254;
   float first, second;

   while (1)
   {
       printf("\nEnter the input character::\n       q for quit\n       1. kms to miles\n       2. inches to foot\n       3. cms to inches\n       4. pound to kgs\n       5. inches to meters\n");
      printf("Enter the character:\n");
       scanf(" %c", &input);
    
       switch (input)
       {
       case 'q':
        printf("Quitting the program...");
        goto end;
        break;

        case '1':
        printf("::Convert kms to miles::\n");
        printf("Enter quantity in terms of first unit(kms)\n");
        scanf("%f", &first);
        second = first * kmsToMiles;
        printf("%.2f Kms is equal to %.2f Miles\n\n\n", first, second);
        break;

        case '2':
        printf("::Convert inches to foot::\n");
        printf("Enter quantity in terms of first unit(inches)\n");
        scanf("%f", &first);
        second = first * inchesToFoot;
        printf("%f Inches is equal to %f Foot\n", first, second);
        break;

        case '3':
        printf("::Convert cms to inches::\n");
        printf("Enter quantity in terms of first unit(cms)\n");
        scanf("%f", &first);
        second = first * cmsToInches;
        printf("%f Cms is equal to %f Inches\n", first, second);
        break;

        case '4':
        printf("::Convert pound to kgs::\n");
        printf("Enter quantity in terms of first unit(pound)\n");
        scanf("%f", &first);
        second = first * poundToKgs;
        printf("%f Pounds is equal to Kgs %f \n", first, second);
        break;

        case '5':
        printf("::Convert inches to meter::\n");
        printf("Enter quantity in terms of first unit(inches)\n");
        scanf("%f", &first);
        second = first * inchesToMeters;
        printf("%f inches is equal to %f meters \n", first, second);
        break;

       default:
       printf("In default now");
           break;
       }
   }
   end:

    return 0;
}