#include <stdio.h>

int main ()
{
    int timeMinutes = 0.0;
    scanf("%d", &timeMinutes);

    double timeDays = timeMinutes/(60*24);

    double timeYears = timeDays/365;

    printf("%.2f\n", timeDays);
    printf("%.2f", timeYears);

    return 0;
}