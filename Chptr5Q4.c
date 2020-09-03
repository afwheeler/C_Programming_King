/*  Ask user to enter wind speed in knots, then provide Beaufort scale.
*   Andrew Wheeler
*   September 3, 2020
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int windspeed;

    printf("\nPlease enter wind speed in knots:\t");
    scanf("%d", &windspeed);

    if (windspeed < 1)
    {
        printf("Calm\n");
    }
    else if (windspeed <= 3)
    {
        printf("Light air\n");
    }
    else if (windspeed <= 27)
    {
        printf("Breeze\n");
    }
    else if (windspeed <= 47)
    {
        printf("Gale\n");
    }
    else if (windspeed <= 63)
    {
        printf("Storm\n");
    }
    else
    {
        printf("Hurricane\n");
    }
    
    return 0;
}
