#include <stdio.h>
//Write a program to determine the size of data types.

int main ()
{
    printf("Variables of type char occupy %zd\n", sizeof(char));
    printf("Variables of type short occupy %zd\n", sizeof(short));
    printf("Variables of type int occupy %zd\n", sizeof(int));
    printf("Variables of type long occupy %zd\n", sizeof(long));
    printf("Variables of type long long occupy %zd\n", sizeof(long long));
    printf("Variables of type char float %zd\n", sizeof(float));
    printf("Variables of type char double %zd\n", sizeof(double));
    printf("Variables of type char long double %zd", sizeof(long double));

    return 0;
}


