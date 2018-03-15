#include<stdio.h>
int main()
{
	int list[20],num,temp,a,b;
	printf("Enter the size:");
	scanf("%d",&num);
	printf("\nElements are");
	for(a=0;a<num;a++)
	 {
		scanf("%d",&list[a]);
	 }
		for(a=0;a<num-1;a++)
		 {
			 for(b=0;b<num-1;b++)
			 {
			  if(list[b]>list[b+1])
			   {
				  temp=list[b];
				  list[b]=list[b+1];
				  list[b+1]=temp;
			    }
			  }
		 }
		printf("\n sorting elements are:");
		for(a=0;a<num;a++)
			{
				printf("%d",list[a]);
			}
	return 0;	
}
