/*  Turn numerical grade into letter with switch statement.
*   Andrew Wheeler
*   September 3, 2020
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int grade, ten_grade, single_grade;

    printf("Enter numerical grade:  ");
    scanf("%d", &grade);

    ten_grade = grade / 10;
    single_grade = grade % 10;

    if (grade > 100)
    {
        printf("Grade can not be higher than 100.\n");
    }
    else if (grade < 0)
    {
        printf("Grade can not be lower than zero.\n");
    }
    else
    {
        switch (ten_grade)
        {
        case 10:
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("F\n");
            break;
        default:
            break;
        }
    }
    
    return 0;
}
