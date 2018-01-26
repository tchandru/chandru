#include<stdio.h>
void main()
{
  int p,q,r;
  printf("\nEnter your number");
  scanf("%d%d",&p,&q);
  p=p+q; 
  q=p-q;
  p=p-q;
  printf("%d   %d",p,q);
}
  
