#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter n = ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("%d/%d%c + ",i,i,33);
    }
    return 0;
}
