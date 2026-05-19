   #include <stdio.h>
   #include <locale.h>

    int main() {
        setlocale(LC_NUMERIC, "");

        int currentAge;
        int pastMonths;

        printf("Enter your age (0-120 yrs): ");
        scanf ("%d", &currentAge);
        printf("How many months ago was your birthday (0-11 months)?: ");
        scanf ("%d", &pastMonths);

        int b = currentAge*12;
        int totalMonths = b + pastMonths;
        int currentDays = totalMonths * 30;

        int ageInHours = currentDays * 24;
        long int ageInMinutes = ageInHours * 60;
        long long int ageInSeconds = ageInMinutes * 60;

        printf("You have lived approximately: %' d hours.\n", ageInHours);
        printf("You have lived approximately: %' d minutes.\n", ageInMinutes);
        printf("You have lived approximately: %' d seconds.\n", ageInSeconds);

        return 0;
    }