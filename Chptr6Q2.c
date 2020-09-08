/*  Calculate the greatest common divisor of two numbers using Euclid's
*   algorithm.
*   Andrew Wheeler
*   8 September 2020
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m, n, remainder;

    printf("\nEnter two integers:\t");
    scanf("%d%d", &m, &n);

    while (n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("The greatest common factor is:\t%d\n\n", m);
    
    return 0;
}

