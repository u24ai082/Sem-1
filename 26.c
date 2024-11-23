#include<stdio.h>

int main() 
{
    int n,i,sume=0,sumo=0;
    printf("Enter n= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sume +=i;
        }
        else 
        {
            sumo +=i;
        }
    }
    printf("\nsum of even = %d",sume);
    printf("\nsum of odd = %d",sumo);
    return 0;
}
