//
// Created by ricardo on 24-03-2019.
//

#include <stdio.h>
#include <limits.h>
#include <float.h>

#define sizeofPrint(type) \
    printf("Size of %-15s is %-2ld bytes\n", #type, sizeof(type))

#define newline() printf("\n")

#define split() printf("\n-----------------------------------------\n\n")

int main() {
    sizeofPrint(char);
    sizeofPrint(short);
    sizeofPrint(int);
    sizeofPrint(long);
    sizeofPrint(float);
    sizeofPrint(double);
    sizeofPrint(long double);

    split();

    printf("char                 MIN value is %20d and MAX is %20d\n", CHAR_MIN, CHAR_MAX);
    printf("unsigned char        MIN value is %20d and MAX is %20d\n", 0, UCHAR_MAX);
    newline();
    printf("short                MIN value is %20d and MAX is %20d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short       MIN value is %20d and MAX is %20d\n", 0, USHRT_MAX);
    newline();
    printf("int                  MIN value is %20d and MAX is %20d\n", INT_MIN, INT_MAX);
    printf("unsigned int         MIN value is %20d and MAX is %20d\n", 0, UINT_MAX);
    newline();
    printf("long                 MIN value is %20ld and MAX is %20ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long        MIN value is %20d and MAX is %20ld\n", 0, ULONG_MAX);
    newline();
    printf("float                MIN value is %20E and MAX is %20E\n", FLT_MIN, FLT_MAX);
    newline();
    printf("double               MIN value is %20E and MAX is %20E\n", DBL_MIN, DBL_MAX);
    newline();
    printf("long double          MIN value is %20LE and MAX is %20LE\n", LDBL_MIN, LDBL_MAX);

    return 0;
}