#include<stdio.h>
#include<conio.h>
void sort(int a[],int size)
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-1-i;j++)
		{
			if(a[j+1]<a[j])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		
		
		}
	
		
	}
	int k;
			for(k=0;k<size;k++)
			printf("%d ",a[k]);
		
			
}
void median(int a[],int low,int size)
{
	if(size%2==0)
	{
		for(int i=0;i<size;i++)
		{
			int mid=((low+size)/2)-1;
			int mid1=mid+1;
			int x=(a[mid]+a[mid1])/2;
		    printf("\n%d",x);
		    break;
		}
	}
	else
	{
		for(int i=0;i<size;i++)
		{
			int mid=(low+size)/2;
		int y=a[mid];
		printf("\n%d",y);
		break;
		}
		
	}
	
}
int main()
{
	int a[100],i,size;
	printf("enter the size of array");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,size);
	if(size==1)
	{
		for(i=0;i<size;i++)
		{
			printf("%d",a[i]);
		}
	}
	else
	{
		median(a,0,size);
		
	}
}
