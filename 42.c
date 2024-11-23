#include <stdio.h>

int main()
{
    int n,i,j=0;
    printf("Enter a No. = ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("1 is neither prime nor composite");
    }
    else
    {
    
    for(i=2;i<=n/2;++i)
        {
            if(n%i==0)
            {
                j=1;
                break;
            }
        }
        if(j==0)
            printf("%d is Prime No.",n);
        else
            printf("%d is Composite No.",n);
    }
    return 0;

