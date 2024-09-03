#include<stdio.h>

int main()
{
    int s=31558150,m,h,d; 
    printf("Earth take 31558150 seconds for revolution"); 
    m=s/60; 
    h=m/60; 
    d=h/24; 
    printf("\nEarth take time for Revolution =\n%d Seconds\n%d Minutes\n%d Hours\n%d Days",s,m,h,d); 
    return 0; 
    
}