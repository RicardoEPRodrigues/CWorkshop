#include <stdio.h>
#include <limits.h>

float grades[10] = {
        10, 9, 18, 5, 3,
        19, 15, 13, 8, 12
};

float lowest_grade(float grades[], int size) {
    float lowest = INT_MAX;
    for (int i = 0; i < size; ++i) {
        if (grades[i] < lowest) {
            lowest = grades[i];
        }
    }
    return lowest;
}

float lowest_grade_while(float grades[], int size) {
    float lowest = INT_MAX;
    int i = 0;
    while (i < size) {
        if (grades[i] < lowest) {
            lowest = grades[i];
        }
        ++i;
    }
    return lowest;
}

// what problems could this create
float lowest_grade_do_while(float grades[], int size) {
    float lowest = INT_MAX;
    int i = 0;
    do {
        if (grades[i] < lowest) {
            lowest = grades[i];
        }
        ++i;
    } while (i < size);
    return lowest;
}

int main() {
    printf("Hello, World!\n");
    float lowestGrade = lowest_grade_do_while(grades, 10);
    printf("The lowest grade is %.2f", lowestGrade);
    return 0;
}