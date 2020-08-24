/*  Classic factorial recursion function in C
*   Program demonstrates recursion with a factorial function.
*   Use VSCode debug to see operation in action.
*   Best example to understand call stack.
*   Andrew Wheeler
*   24 August 2020
*/

#include <stdio.h>

int fact(int n)
{
    if (n == 1 )
    {
        return 1;
    }

    else
    {
        return n * fact(n-1);
    }    
}


int main(int argc, char const *argv[])
{
    
    int x;
    printf("\nPlease enter an integer below 20 to determine factorial:  ");
    scanf("%d", &x);

    printf("\nRecursive factorial function result below:\n");
    printf("%d\n\n", fact(x));

    return 0;
}
