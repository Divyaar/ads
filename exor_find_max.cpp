#include<stdio.h>
#include<conio.h>
int main()
{
	int limit1,limit2,x;
	printf("enter the element of limit1 ");
	scanf("%d",&limit1);
	printf("enter the element of limit2 ");
	scanf("%d",&limit2);
	int max=0;
	int l1,l2;
	for(int i=limit1;i<=limit2;i++)
	{
		for(int j=limit1;j<=limit2;j++)
		{
			 x=j^i;
			 if(max<x)
			 
{
max=x;
l1=i;
l2=j;

	
			 }			 
		
			}
			
	   }
	   printf("%d\n",max);
	   printf("l1=%d l2=%d",l1,l2);
}
	

