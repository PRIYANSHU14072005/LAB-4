//READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A LIST OF NUMBERS READ
#include <stdio.h>
int main()
{
    int num, i, sum = 0;
    while (num > 0)
    {
        printf("enter the number:");
        scanf("%d", &num);
        if (num < 0)
            break;
        sum += num;
    }
    printf("sum of positive number =%d", sum);
    return 0;
}
