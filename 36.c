//PROGRAM TO PRINT 1,3,5,7,9………N.
#include <stdio.h>
int main()
{
    int n, i = 1, x, count = 0;
    printf("enter the limit n :");
    scanf("%d", &n);
    x = n;
    for(i=1;i<=n;i++){
        if(i%2!=0){
            printf("%d,",i);
        }
    }
    return 0;
}