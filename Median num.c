#include<stdio.h>
void main()
{

	int a[30],median,n,i,sum=0;
	printf("Enter the size of array :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("\nThe sum is %d",sum);
	median=sum/2;
	printf("\nThe Median Element is %d",median);
}
