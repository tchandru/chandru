#include<stdio.h>
void main()
{
    int p,q=0,r,s;
    printf("Enter the integer:");
    scanf("%d",&p);
    s=p;
    while(p!=0)
    {
        r=p%10;
        q=q*10+r;
        p/=10;
    }
    if(s==q)
    {
        printf("%d is a palindrome",s);
    }
    else
    {
        printf("%d is not a palindrome",s);
    }
}

    
