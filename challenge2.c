#include <stdio.h>

int main() {
    double height = 15.3;
    double width = 32.3;
    double perimeter = 0.0;
    double area = 0.0;

    printf ("Insert height = ");
    scanf("%lf", height);
    printf ("\nInsert width = ");
    scanf("%lf", width);

    double perimeter = 2.0*(height+width);
    double area = width*height;

    printf ("The perimeter of your rectangle is: %lf\n", perimeter);
    printf ("The area of your rectangle is: %lf\n", area);

    return 0;
}