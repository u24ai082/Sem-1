#include<stdio.h>

int main()
{
    int a,b;
    char o;
    printf("Enter two No. = ");
    scanf("%d %d",&a,&b);
    printf("Enter operator = ");
    scanf(" %c",&o);
    
    switch (o)
    {
        case'+':
            printf("%d %c %d = %d",a,o,b,a+b);
        break;
        case'-':
            printf("%d %c %d = %d",a,o,b,a-b);
        break;
        case'*':
            printf("%d %c %d = %d",a,o,b,a*b);
        break;
        case'/':
            if(b!=0)
            printf("%d %c %d = %d",a,o,b,a/b);
            else
            printf("Error");
        break;
        default:
            printf("Error");    
        break;    
    }        
    
    return 0;
}