#include<stdio.h>

int main()
{
    int a;
    printf("Enter No. = ");
    scanf("%d",&a);
    if(a%2 ==0)
    printf("\n%d is Even",a);
    else
    printf("\n%d is Odd",a);
    return 0;
}