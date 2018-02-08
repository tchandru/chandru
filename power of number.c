#include<stdio.h>
void main()
{
    int x,y,ans=1;
    printf("enter the number  : ");
    scanf("%d",&x);
    printf("enter the power  : ");
    scanf("%d",&y);
    while(y!=0)
    {
        ans*=x;
        --y;
    }
    printf("answer=%d",ans);
}
