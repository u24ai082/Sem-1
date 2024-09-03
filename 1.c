#include<stdio.h>

int main()
{
    int m,i,t,im; 
    printf("Enter Principal money interest percentage and time period = "); 
    scanf("%d %d %d",&m,&i,&t); 
    im=m*i*t/100; 
    printf("Total Interest = %d",im);
    return 0;
}