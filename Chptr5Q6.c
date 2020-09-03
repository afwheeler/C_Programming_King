/* Check whether a UPC is valid.
*   Andrew Wheeler
*   September 3, 2020
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, check_digit, first_sum,
        second_sum, total, calc_cd;

    printf("\nEnter UPC numbers in format 'x xxxxx xxxxx x':  ");
    scanf("%1d %1d%1d%1d%1d%1d %1d%1d%1d%1d%1d %1d", &d, &i1, &i2, &i3, &i4, &i5,
        &j1, &j2, &j3, &j4, &j5, &check_digit);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;
    calc_cd = 9 - ((total - 1) % 10);

    if (calc_cd == check_digit )
    {
        printf("VALID\n");
    }
    else
    {
        printf("NOT VALID\n");
    }
    
    return 0;
}
