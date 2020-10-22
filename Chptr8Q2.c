/* Chapter 8, Project 2
* Print a table showing how many times each digit appears in a number
* Andrew Wheeler, October 22, 2020
*/

#include <stdio.h>

#define SIZE ((int) sizeof(digit_count) / sizeof(digit_count[0]))
#define N 10

int main(int argc, char const *argv[])
{
    long num, digit;
    int digit_count[N] = {0};

    printf("\nEnter a number:  ");
    scanf("%ld", &num);

    printf("Digit:\t\t");
    for (size_t i = 0; i < N; i++)
    {
        printf("%4lu", i);
    }
    printf("\n");

    while (num > 0)
    {
        digit = num % 10;
        digit_count[digit] += 1;
        num /= 10;
    }
    
    printf("Occurrences:\t");
    for (size_t i = 0; i < N; i++)
    {
        printf("%4d", digit_count[i]);
    }
    printf("\n\n");
    
    return 0;
}
