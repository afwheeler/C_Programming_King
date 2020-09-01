/*  Chapter 2, Programming Project 4
*   Add 5% tax to $ amount entered by user.
*   Andrew Wheeler
*   August 25, 2020
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float amount;

    printf("Please add amount, including cents, to calculate tax:  ");
    scanf("%f", &amount);

    printf("With tax added:  %.2f\n", amount * 1.05);

    return 0;
}
