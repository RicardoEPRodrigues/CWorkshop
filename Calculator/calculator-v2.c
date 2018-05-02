#include <stdio.h>

typedef struct {
    unsigned int id;
    float value;
} Calculator;

float Add(float number1, float number2);

float Subtract(float number1, float number2);

float Multiply(float number1, float number2);

float Divide(float number1, float number2);

float Clear();

float ReadValue() {
    float value;
    printf("VALUE: ");
    scanf("%f", &value);
    return value;
}

int main() {
    Calculator calculators[3];
    char input;
    int i, currentIndex;
    unsigned int id;

    calculators[0].id = 50;
    calculators[1].id = 33;
    calculators[2].id = 70;

    printf("C Calculator\n\n");
    do {
        for (i = 0; i < 3; i++ ) {
            printf("Calculator %d: %.2f\n", calculators[i].id,
                                             calculators[i].value);
        }

        printf("ID? ");
        scanf("%u", &id);

        currentIndex = -1;
        for (i = 0; i < 3; i++ ) {
            if (calculators[i].id == id) {
                currentIndex = i;
                break;
            }
        }
        if (currentIndex < 0) {
            printf("Invalid Id");
            continue;
        }

        printf("INPUT: ");
        scanf(" %c", &input);

        switch (input) {
            case '+':
                calculators[currentIndex].value = Add(calculators[currentIndex].value, ReadValue());
                break;
            case '-':
                calculators[currentIndex].value = Subtract(calculators[currentIndex].value, ReadValue());
                break;
            case '*':
                calculators[currentIndex].value = Multiply(calculators[currentIndex].value, ReadValue());
                break;
            case '/':
                calculators[currentIndex].value = Divide(calculators[currentIndex].value, ReadValue());
                break;
            case 'c':
                calculators[currentIndex].value = Clear();
                break;
            case 'e':
                break;
            default:
                printf("Invalid option");
                break;
        }
    } while(input != 'e');

    return 0;
}

float Add(float number1, float number2) {
    return number1 + number2;
}

float Subtract(float number1, float number2) {
    return number1 - number2;
}

float Multiply(float number1, float number2) {
    return number1 * number2;
}

float Divide(float number1, float number2) {
    return number1 / number2;
}

float Clear() {
    return 0;
}