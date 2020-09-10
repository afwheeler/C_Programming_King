/*  Write a program that prints the values of various simple variable types.
*   Andrew Wheeler
*   Sept 10, 2020
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("\nSize of char:  %ld\n", sizeof(char));
    printf("Size of short:  %ld\n", sizeof(short));
    printf("Size of int:  %ld\n", sizeof(int));
    printf("Size of long:  %ld\n", sizeof(long));
    printf("Size of long long:  %ld\n", sizeof(long long));
    printf("Size of float:  %ld\n", sizeof(float));
    printf("Size of double:  %ld\n", sizeof(double));
    printf("Size of long double:  %ld\n", sizeof(long double));

    return 0;
}
