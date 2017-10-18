#include <stdio.h>
#include <limits.h>

float add(float value);

float subtract(float value);

float multiply(float value);

float divide(float value);

float clear();

float evaluateInput(float value, int input);

int main() {
    float value = 0.0f;
    printf("Hello! Welcome to the CWorkshop Calculator!\n");

    int input = 0;
    do {
        printf("\nVALUE: %.2f\n\n", value);
        printf("0 - Exit; 9 - Clear;\n");
        printf("1 - Add; 2 - Subtract; 3 - Multiply; 4 - Divide;\n");

        printf("INPUT: ");
        scanf("%d", &input);
        printf("\n\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\n\n");

        value = evaluateInput(value, input);
    } while (input != 0);

    return 0;
}

float add(float value) {
    float scanValue = 0;
    printf("%.2f + ", value);
    scanf("%f", &scanValue);
    return value + scanValue;
}

float subtract(float value) {
    float scanValue = 0;
    printf("%.2f - ", value);
    scanf("%f", &scanValue);
    return value - scanValue;
}

float multiply(float value) {
    float scanValue = 0;
    printf("%.2f * ", value);
    scanf("%f", &scanValue);
    return value * scanValue;
}

float divide(float value) {
    float scanValue = 0;
    printf("%.2f / ", value);
    scanf("%f", &scanValue);

    if (scanValue == 0) {
        printf("Can't divide by Zero!");
        return value;
    }
    return value / scanValue;
}

float clear() {
    printf("Clearing Value\n");
    return 0;
}

float evaluateInput(float value, int input) {
    switch (input) {
        case 1:
            value = add(value);
            break;
        case 2:
            value = subtract(value);
            break;
        case 3:
            value = multiply(value);
            break;
        case 4:
            value = divide(value);
            break;
        case 9:
            value = clear();
            break;
        case 0:
        default:
            break;
    }
    return value;
}