#include<stdio.h>

int main()
{
    int m,p,c,e,cm;
    printf("Enter Maths Physics Chemistry and Entrance Exam Marks= ");
    scanf("%d %d %d %d",&m,&p,&c,&e);
    cm=m/2+p/2+c/2+e;
    printf("Cut off Marks = %d",cm);
    return 0;
}