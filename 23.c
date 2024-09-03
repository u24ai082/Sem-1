#include<stdio.h>

int main()
{
    int n,e,a=1;
    printf("Enter a No. and Exponential = ");
    scanf("%d %d",&n,&e);
    
    while (e!=0)
    {
        a*=n;
        --e;
    }    
    printf("= %d",a);
    return 0;
}