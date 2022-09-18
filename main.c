#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float firstValue;
    float secondValue;
    char operatorToCalculate;
    float result;

    printf("Enter expression: ");
    scanf("%f %c %f", &firstValue, &operatorToCalculate, &secondValue);

    switch (operatorToCalculate) {
        case '/': {
            result = firstValue / secondValue;
            break;
        }
        case '*': {
            result = firstValue * secondValue;
            break;
        }
        case '+': {
            result = firstValue + secondValue;
            break;
        }
        case '-': {
            result = firstValue - secondValue;
            break;
        }
        case '^': {
            result = pow(firstValue, secondValue);
            break;
        }
        default: return -1;
    }

    printf("%.2f %c %.2f = %.2f", firstValue, operatorToCalculate, secondValue, result);

    return 0;
}
