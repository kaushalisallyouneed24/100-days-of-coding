#include <stdio.h>

int main() {
    int day, month, year;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    if (month == 1)
        printf("%02d-Jan-%04d\n", day, year);
    else if (month == 2)
        printf("%02d-Feb-%04d\n", day, year);
    else if (month == 3)
        printf("%02d-Mar-%04d\n", day, year);
    else if (month == 4)
        printf("%02d-Apr-%04d\n", day, year);
    else if (month == 5)
        printf("%02d-May-%04d\n", day, year);
    else if (month == 6)
        printf("%02d-Jun-%04d\n", day, year);
    else if (month == 7)
        printf("%02d-Jul-%04d\n", day, year);
    else if (month == 8)
        printf("%02d-Aug-%04d\n", day, year);
    else if (month == 9)
        printf("%02d-Sep-%04d\n", day, year);
    else if (month == 10)
        printf("%02d-Oct-%04d\n", day, year);
    else if (month == 11)
        printf("%02d-Nov-%04d\n", day, year);
    else if (month == 12)
        printf("%02d-Dec-%04d\n", day, year);
    else
        printf("Invalid month!\n");

    return 0;
}
