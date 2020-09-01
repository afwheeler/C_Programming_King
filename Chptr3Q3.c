/*  Write a program that breaks down an ISBN number entered by a user.
*   Andrew Wheeler
*   September 1, 2020
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int gs1, group, publisher, itemx, check;

    printf("\nEnter ISBN:\t");
    scanf("%d-%d-%d-%d-%d", &gs1, &group, &publisher, &itemx, &check);

    printf("\nGS1 prefix:  %d\n", gs1);
    printf("Group identifier:  %d\n", group);
    printf("Publisher code:  %d\n", publisher);
    printf("Item number:  %d\n", itemx);
    printf("Check digit:  %d\n", check);

    return 0;
}
