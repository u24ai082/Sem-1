#include<stdio.h>

int main()
{
    char a1;
    printf("Enter a Character = ");
    scanf("%c",&a1);
    if(a1 >= 'a' && a1 <= 'z')    
    {
        printf("\nThis is a small case letter");
    }
    else
    {
        printf("\nThis is not a small case letter");
    }
    return 0;
}