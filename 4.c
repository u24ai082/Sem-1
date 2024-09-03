#include<stdio.h>

int main()
{
    int f,c; 
    printf("Enter Fahrenheit Temparature = "); 
    scanf("%d",&f); 
    c=(f-32)*5/9; 
    printf("Centigade Temparature = %d",c); 
    return 0;
}