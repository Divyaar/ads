#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],size;
	printf("enter the size of the array");
	scanf("%d",&size);
	printf("enter the elements of array");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<size;i++)
	{
		int x=a[i];
		int j=i-1;
		while(j>=0 && a[j]>x)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=x;
	}
	for(int i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
