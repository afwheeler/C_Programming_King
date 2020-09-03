/*  Ask user for 24h time and then convert into 12h time.
*   Andrew Wheeler
*   September3, 2020
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int hour, minute;

    printf("\nPlease enter a 24-hour time:\t");
    scanf("%2d:%2d", &hour, &minute);

    if (hour == 0)
    {
        printf("Equivalent 12-hour time:\t12:%2d AM\n\n", minute);
    }
    else if (hour == 12)
    {
        printf("Equivalent 12-hour time:\t%2d:%2d PM\n\n", hour, minute);
    }    
    else if (hour > 12)
    {
        printf("Equivalent 12-hour time:\t%2d:%2d PM\n\n", hour - 12, minute);
    }
    else if (hour < 12)
    {
        printf("Equivalent 12-hour time:\t%2d:%2d AM\n\n", hour, minute);
    }

    return 0;
}
