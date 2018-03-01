
#include<stdio.h>
void main()
{
int X[50],i,n,max;
printf("Enter the range  :");
scanf("%d",&n);
printf("Enter the array values  :");
for(i=0;i<n;i++)
{
scanf("%d",&X[i]);
}
max=X[0];
for(i=0;i>n;i++)
{
if(X[i]>max)
{
max=X[i];
}
}
printf("%d",max);
}

