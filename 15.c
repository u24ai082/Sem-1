#include<stdio.h>

int main()
{
    int a1,a2,a3,a4,a5;
    printf("Enter marks of five subject = ");
    scanf("%d %d %d %d %d",&a1,&a2,&a3,&a4,&a5);
    if((a1+a2+a3+a4+a5)/5 >90)
        printf("\n Your Grade A1");
    else if((a1+a2+a3+a4+a5)/5 >80)
        printf("\n Your Grade A2");
    else if((a1+a2+a3+a4+a5)/5 >70)
        printf("\n Your Grade B1");
    else if((a1+a2+a3+a4+a5)/5 >60)
        printf("\n Your Grade B2");
    else if((a1+a2+a3+a4+a5)/5 >50)
        printf("\n Your Grade C1");
    else if((a1+a2+a3+a4+a5)/5 >40)
        printf("\n Your Grade C2");
    else if((a1+a2+a3+a4+a5)/5 >=33)
        printf("\n Your Grade D");
    else 
        printf("\nFail");
    return 0;
}