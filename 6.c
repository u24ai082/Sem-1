#include<stdio.h>

int main()
{
    int a,b; 
    printf("Enter first no. "); 
    scanf("%d",&a); 
    printf("Enter second No. = "); 
    scanf("%d",&b); 
    a=a+b; 
    b=a-b; 
    a=a-b; 
    printf("\nfirst = %d",a); 
    printf("\nsecond = %d",b); 
    return 0;
}