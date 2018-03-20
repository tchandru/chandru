#include<stdio.h>
void main()
{
char x[10],i;
printf("enter a string");
scanf("%s",&x);
for(i=0;x[i]!='\0';i++)
{
if((x[i]>'a')&&(x[i]<'z'))
{
printf("no numeric");

}
else
{
    printf("%c\n",x[i]);
}
}}
