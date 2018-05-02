/*
 * Created by Ricardo Rodrigues on 18/10/2017.
 */

#include <stdio.h>
#include "Student.h"
#include "Course.h"

int main() {
    int i;
    Course* courses[3];
    Student* students[2];

    printf("Cenix! It's like Fenix but in Command Line C.\n\n");

    printf("Creating Courses\n");
    courses[0] = Course_new("Topicos de Investigacao", 1);
    courses[1] = Course_new("Algebra Linear", 2);
    courses[2] = Course_new("Computacao Paralela", 3);

    Course_addNews(courses[0], "Nova Apresentacao");
    Course_addNews(courses[0], "Revisao de Provas");

    Course_addNews(courses[1], "Aula Cancelada");
    Course_addNews(courses[1], "Notas Lancadas");

    Course_addNews(courses[2], "Exame");
    Course_addNews(courses[2], "Primeira Aula");

    printf("Creating Students\n");
    students[0] = Student_new("Rodrigo Rodrigues", 73960);
    students[1] = Student_new("Andreia Fernandes", 73821);

    Student_addCourse(students[0], courses[0]);
    Student_addCourse(students[0], courses[2]);

    Student_addCourse(students[1], courses[0]);
    Student_addCourse(students[1], courses[1]);

    printf("Printing Students' Info\n");
    for (i = 0; i < 2; ++i) {
        Student_info(students[i]);
        printf("\n");
    }

    printf("Deleting Students\n");
    for (i = 0; i < 2; ++i) {
        Student_delete(students[i]);
    }
    printf("Deleting Courses\n");
    for (i = 0; i < 3; ++i) {
        Course_delete(courses[i]);
    }

    return 0;
}
