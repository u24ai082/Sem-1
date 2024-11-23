#include<stdio.h>

int main()
{
    int i,n[10],count=0;
    for(i=0;i<10;i++)
    {
        printf("Enter a No. = ");
        scanf("%d",&n[i]);
        
        if(n[i]%2==0)
        {
            count+=1;
        }
        
    }  
    printf("\nEven = %d\nOdd = %d",count,10-count);
    
    return 0;
}