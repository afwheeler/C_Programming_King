/* User input of date, print out in different format.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int mnth, day, year;

    printf("\nEnter a date (mm/dd/yyyy):\t");
    scanf("%d/%d/%d", &mnth, &day, &year);

    printf("You entered the date %4d%2.2d%2.2d\n", year, mnth, day);
    return 0;
}
