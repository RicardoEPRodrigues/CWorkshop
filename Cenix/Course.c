/*
 * Created by Ricardo Rodrigues on 18/10/2017.
 */

#include <stdlib.h>
#include <memory.h>
#include <stdio.h>
#include <string.h>
#include "Course.h"

Course* Course_new(const char name[50], unsigned int id) {
    Course* course = malloc(sizeof(Course));
    course->id = id;
    strcpy(course->name, name);
    course->newsCount = 0;
    return course;
}

void Course_delete(Course* course) {
    if (course == NULL) return;
    free(course);
}

void Course_addNews(Course *course, char news[50]) {
    if (course->newsCount > 10) {
        return;
    }
    strcpy(course->news[course->newsCount], news);
    course->newsCount++;
}

void Course_info(Course *course) {
    unsigned int i;
    printf("\tName: %s; Id: %d;\n", course->name, course->id);
    printf("\t\tNews:\n");
    for (i = 0; i < course->newsCount; ++i) {
        printf("\t\t\t%s\n", course->news[i]);
    }
}
