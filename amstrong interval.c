#include <stdio.h>
void main()
{
  int x1, x2, i, temp, num, rem;
  x1=150;
  x2=160;
  printf("Enter interval",x1,x2);
  scanf("%d %d", &x1, &x2);
  printf("Armstrong numbers between %d an %d are", x1, x2);
  for(i=x1+1; i<x2; ++i)
  {
	  temp=i;
      num=0;
      while(temp!=0)
      {
          rem=(temp%10);
          num+=rem*rem*rem;
          temp/=10;
      }
      if(i==num)
          printf("%d ",i);
      }
}
