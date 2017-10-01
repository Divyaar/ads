#include<stdio.h>
#include<conio.h>
int main()
{
	int size,i,j,a[10],loc,temp;
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
	loc=i;
	for(j=i+1;j<size;j++)
	{
		if(min_element>a[j])
		{
			min_element=a[j];
			loc=j;
			
			
			
		}
		
	}
	temp=a[i];
	a[i]=a[loc];
	a[loc]=temp;
}
for(i=0;i<size;i++)
{
	printf("%d",a[i]);
}
return 0;
}
