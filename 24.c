// Online C compiler to run C program online
#include<stdio.h>
#include<math.h>
int main() 
{
    int x,y,n;
    printf("Enter x and n= ");
    scanf("%d %d",&x,&n);
    if(n==1)
    {
        y=1+x;
    }
    else if(n==2)
    {
        y=1+x/n;
    }
    else if(n==3)
    {
        y=1+(pow(x,n));
    }
    else if(n<1 || n>3)
    {
        y=1+n*x;
    }
    printf("y = %d",y);
    return 0;
}
