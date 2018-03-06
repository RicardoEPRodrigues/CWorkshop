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
       
        printf("'+' - Sum; '-' - Subtract; '*' - Multiply; '/' - Divide; 'c' - Clear; 'e' - Exit\n\n");
        
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
