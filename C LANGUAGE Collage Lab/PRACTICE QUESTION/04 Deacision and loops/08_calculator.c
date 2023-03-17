/*	C Program to Make a Simple Calculator Using switch...case.*/
#include <stdio.h>
int main() {
    char operator;
    float first, second;
    printf("Enter an operator (+, -, *,/):\n");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%f %f", &first, &second);

    switch (operator) {
    case '+':
        printf("%.1f + %.1f = %.1f", first, second, first + second);
        break;
    case '-':
        printf("%.1f - %.1f = %.1f", first, second, first - second);
        break;
    case '*':
        printf("%.1f * %.1f = %.1f", first, second, first * second);
        break;
    case '/':
        printf("%.1f / %.1f = %.1f", first, second, first / second);
        break;
        // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}