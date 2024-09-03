#include<stdio.h>

int main()
{
    int b,h,a; 
    printf("Enter b and h to calculate area of triangle = "); 
    scanf("%d %d",&b,&h); 
    a=b*h/2; 
    printf("Area of triangle = %d",a); 
    return 0;
}