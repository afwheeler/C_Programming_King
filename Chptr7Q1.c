/*  Test max value by variable type of the square2.c program
*   Andrew Wheeler
*   September 10, 2020
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("\nThis program prints a table of squares.\n");
    printf("Enter number of entries in the table:  ");
    scanf("%d", &n);

    for (short i = 1; i <= n; i++)
    {
        printf("%10hd%10hd\n", i, i * i);
    }
    
    return 0;
}
