//
// Created by Ricardo Rodrigues on 18/10/2017.
//

#ifndef CWORKSHOP10_17_COURSE_H
#define CWORKSHOP10_17_COURSE_H

typedef struct {
    char name[50];
    unsigned int id;

    char news[10][50];
    unsigned int newsCount;
} Course;

Course Course_new(const char name[50], unsigned int id);

void Course_addNews(Course *course, char news[50]);

void Course_info(Course *course);

#endif //CWORKSHOP10_17_COURSE_H
