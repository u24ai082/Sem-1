#include<stdio.h>

int main()
{
    int gs,bs,da,hr; 
    printf("Enter your basic salary = "); 
    scanf("%d",&bs); 
    da=bs*5/100; 
    hr=bs*10/100; 
    gs=bs+da+hr; 
    printf("Gross Salary = %d",gs);
    return 0;
}