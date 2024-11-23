#include<stdio.h>

int main()
{
    int i,n[10],pos=0,neg=0;
    for(i=0;i<10;i++)
    {
        printf("Enter a No. = ");
        scanf("%d",&n[i]);
        
        if(n[i]>0)
        {
            pos+=1;
        }
        else if(n[i]<0)
        {
            neg+=1;
        }
        
    }  
    printf("\nPositive = %d\nNegative = %d\nZero = %d",pos,neg,10-pos-neg);
    
    return 0;
}