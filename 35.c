//READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF N
#include <stdio.h>
int main()
{
    int n, i, x, a, count=0,sum;
    printf("enter the value of n :");
    scanf("%d", &n);
    x = n;
    while (n > 0)
    {
        i = n % 10;
        count += i;

        n /= 10;
    }
    printf("the sum of indivisual digit is %d\n", count);
    a = count;
    while (a > 0)
    {
        i = a % 10;
        sum += i;
        a /= 10;
    }
    printf("the sum of digits in a single digit is %d \n",sum);
    return 0;
}