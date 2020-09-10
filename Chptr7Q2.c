/*  Square program now pauses after every 24 squares.
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
    getchar();  // Clear the buffer on newlines.

    for (int i = 1; i <= n; i++)
    {
        printf("%10d%10d\n", i, i * i);
        if (i % 24 == 0)
        {
            printf("\nPress enter to continue...");
            getchar();
        }
    }

    return 0;
}
