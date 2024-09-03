#include<stdio.h>

int main()
{
    int n,factorial=1,i;
    printf("Enter a No. = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        factorial = factorial * i;
    }
    printf("%d factorial = %d",n,factorial);
    return 0;
}