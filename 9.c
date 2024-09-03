#include<stdio.h>

int main()
{
    int h,m,s,ts;
    printf("Enter Hours Minutes and Seconds = ");
    scanf("%d %d %d",&h,&m,&s);
    ts=(h*3600)+(m*60)+s;
    printf("\nTotal Seconds = %d",ts);
    return 0;
}