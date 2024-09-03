#include<stdio.h>

int main()
{
    char a;
    printf("Enter No. = ");
    scanf("%c",&a);
    if(a>='A' && a<='Z')
        printf("\n%c is Capital Letter",a);
        
    else if(a>='a' && a<='z')
        printf("\n%c is Lower Letter",a);
        
    else if(a>='0' && a<='9')    
        printf("\n%c is Digit",a);
    
    else
        printf("\n%c is Special Letter",a);    
    return 0;
}