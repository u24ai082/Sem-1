#include<stdio.h>

int main()
{
    int a1,a2,a3,a4,a5,t; 
    printf("Enter marks of five subjects = "); 
    scanf("%d %d %d %d %d",&a1,&a2,&a3,&a4,&a5); 
    t=a1+a2+a3+a4+a5; 
    printf("Total marks and Percentage = %d , %d",t,t/5);
    return 0;
}