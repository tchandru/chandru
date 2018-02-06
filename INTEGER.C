#include<stdio.h>
void main()
{
    int X,i=0;
    printf("enter the integers  :");
    scanf("%d",&X);
    while(X!=0)
    {
        X/=10;
        i+=1;
    }
        printf("number of digits=%d",i);
        
}
