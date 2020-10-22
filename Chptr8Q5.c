/* Chapter 8, Exercise 5
* Modify interest.c program to compound monthly
* Andrew Wheeler, 22 October, 2020
*/

#include <stdio.h>

#define NUM_RATES ((int) sizeof(value)/sizeof(value[0]))    //Note cast
#define INTITIAL_BALANCE 100.00
#define N 5
#define COMP_PERIOD 12

int main(int argc, char const *argv[])
{
    int low_rate, num_years, year;
    double value[N];

    printf("\nEnter the interest rate:  ");
    scanf("%d", &low_rate);
    printf("Enter the number of years:  ");
    scanf("%d", &num_years);

    printf("\nYears");
    for (size_t i = 0; i < NUM_RATES; i++)
    {
        printf("%6lu%%", low_rate + i);
        value[i] = INTITIAL_BALANCE;        //Initialize all to 100.00
    }
    printf("\n");

    for (year = 1; year <= num_years; year++)
    {
        printf("%3d   ", year);
        for (size_t i = 0; i < NUM_RATES; i++)
        {
            for (size_t xz = 1; xz <= COMP_PERIOD; xz++)
            {
                value[i] += ((double) (low_rate + i)/COMP_PERIOD)/100.0 * value[i];
            }        
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }    
    printf("\n");

    return 0;
}
