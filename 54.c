#include<stdio.h>

int main()
{
    int i,n[10],sum=0;
    for(i=0;i<10;i++)
    {
        printf("Enter a No. = ");
        scanf("%d",&n[i]);
        sum+=n[i];
    }  
    printf("Sum of 10 No. = %d",sum);
    return 0;
}