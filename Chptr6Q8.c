/*  This program prints a one month calendar.
*   User inputs month length and beggining day of month.
*   Andrew Wheeler
*   September 8, 2020
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int days_in_month, starting_day_of_week, f = 1;

    printf("\nEnter number of days in the month:\t");
    scanf("%d", &days_in_month);
    printf("Enter starting day of the week (1=Sun, 7=Sat):\t");
    scanf("%d", &starting_day_of_week);

    while (f < starting_day_of_week)
    {
        printf("   ");
        ++f;
    }

    for (size_t i = 1; i <= days_in_month; i++)
    {
        printf("%3.2ld", i);
        ++f;
        if (f == 8)
        {
            printf("\n");
            f = 1;
        }
        
    }

    printf("\n");
    
    return 0;
}
