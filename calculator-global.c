#include <stdio.h>

double value;

void Sum() {
    double in = 0;
    scanf("%lf", &in);
    value += in;
}

void Subtract() {
    double in = 0;
    scanf("%lf", &in);
    value -= in;
}

void Multiply() {
    double in = 0;
    scanf("%lf", &in);
    value *= in;
}

void Divide() {
    double in = 0;
    scanf("%lf", &in);
    value /= in;
}

void Clear() {
    value = 0;
}

int main() {
    printf("Hello! Welcome to the CWorkshop Calculator!\n\n");
    
    char option = 0;
    do {
    
        printf("Valor: %f\n", value);
       
        printf("1 - Sum; 2 - Subtract; 3 - Multiply; 4 - Divide; 5 - Clear; 6 - Exit\n\n");
        
        printf("OPTION: ");
        scanf(" %c", &option);
        
        switch (option) {
            case '+':
                Sum();
                break;
            case '-':
                Subtract();
                break;
            case '*':
                Multiply();
                break;
            case '/':
                Divide();
                break;
            case 'c':
                Clear();
                break;
            case 'e':
                break;
            default:
                break;
        }
    
    } while(option != 'e');
    
    return 0;
}
