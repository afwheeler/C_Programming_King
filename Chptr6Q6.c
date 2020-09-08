/*  Prompt a user to enter the number n, then print out all even squares
*   between 1 and the number n.
*   Andrew Wheeler
*   September 8, 2020
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("\nPlease enter an integer number:\t");
    scanf("%d", &n);

    for (size_t i = 1; i*i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%ld\n", i*i);
        }
        
    }
    
    return 0;
}
