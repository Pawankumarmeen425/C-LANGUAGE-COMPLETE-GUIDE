/*You have to create a command line utility to add/subtract/divide/multiply two numbers 
First command line argument of your c program must be the operation.
The next arguments being the two numbes. 
For example::
<< Command.c add 45 4
<< 49*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    float result = 0;
    char operation[20];
  int num1, num2;
    strcpy(operation, argv[1]);
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);
    if (strcmp(operation, "add") == 0)
    {
        result = num1 + num2;
    }
    else if (strcmp(operation, "subtract") == 0)
    {
        result = num1 - num2;
    }
    else if (strcmp(operation, "divide") == 0)
    {
        result = (float)num1 / num2;
    }
    else if (strcmp(operation, "multiply") == 0)
    {
        result = num1 * num2;
    }
    printf("Final Result is %0.2f::\n", result);
    return 0;
}
