/*  This program asks the user to enter a 3 digit number and then print
*   the number in reverse order.
*   Andrew Wheeler
*   1 September 2020
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("\nPlease enter a three digit number:\t");
    scanf("%3d", &num);

    printf("The number reversed: %d%d%d\n", num % 10, num / 10 - (num / 100 * 10), num / 100);

    return 0;
}
