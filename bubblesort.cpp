#include<stdio.h>
#include<conio.h>
void swap(int*,int*);


void swap(int *a,int *n)
{
	int *temp;
    *temp=*a;
	*a=*n;
	*n=*temp;
}

int main()
{
	int a[10],i,j,size;
	printf("enter the size of array");
	scanf("%d",&size);
	printf("enter the elements of array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
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
			return 0;
}
