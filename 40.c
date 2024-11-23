#include <stdio.h>

int main()
{
    int n,s,i=0;
    while (1)
    {
        printf("Enter a No. = ");
        scanf("%d",&n);
        if (n<0)
            break;
        s+=n;
    }
    printf("Sum = %d",s);
    return 0;
}
