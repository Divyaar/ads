#include<stdio.h>
#include<conio.h>
int main()
{
	int size,i,j,a[10];
	printf("enter the elements of array");
	scanf("%d",&size);
	printf("enter the elements of array");
	for(i=0;i<size;i++)
	{
	scanf("%d",&a[i]);
}
for(i=0;i<size;i++)
{
	int min_element=a[i];
	for(j=i;j<size;j++)
	{
		if(min_element>a[j])
		{
			int temp=a[j-1];
			a[j-1]=a[j];
			a[j]=temp;
			
			
			
		}
	}
}
for(i=0;i<size;i++)
{
	printf("%d",a[i]);
}
return 0;
}
