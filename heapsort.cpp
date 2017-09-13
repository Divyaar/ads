#include<stdio.h>
void minheapsort(int*,int);
void maxheapsort(int*,int);
void heapify(int*,int);
void adjust(int*,int);
main() {
	int n,i,a[50],ch;
	printf("\n1.min heap\n2.max heap");
	printf("\nenter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
	while(1)
	{

		case 1: 
		printf("\nEnter the limit:");
	    scanf("%d",&n);
    	printf("\nEnter the elements:");
	    for (i=0;i<n;i++)
	    scanf("%d",&a[i]);
	  	minheapsort(a,n);
	  	break;
	  	
	  	case 2: 
		printf("\nEnter the limit:");
	    scanf("%d",&n);
	    printf("\nEnter the elements:");
	    for (i=0;i<n;i++)
	    scanf("%d",&a[i]);
	  	maxheapsort(a,n);
	  	break;
	}
}
	printf("\nThe Sorted Elements Are:\n");
	for (i=0;i<n;i++)
	printf("\t%d",a[i]);
	printf("\n");
}
void minheapsort(int a[],int n) {
	int i,t;
	heapify(a,n);
	for (i=n-1;i>0;i--) 
	{
	t = a[0];
	a[0] = a[i];
	a[i] = t;
	adjust(a,i);
	}
}
void maxheapsort(int a[],int n) {
	int i,t;
	heapify(a,n);
	for (i=0;i<n-1;i++) {
		t = a[0];
		a[0] = a[i];
		a[i] = t;
		adjust(a,i);
	}
}
void heapify(int a[],int n) {
	int k,i,j,item;
	for (k=1;k<n;k++) 
	{
	item = a[k];
	i = k;
	j = (i-1)/2;
	while((i>0)&&(item>a[j])) {
	a[i] = a[j];
	i = j;
	j = (i-1)/2;
}
	a[i] = item;
}
}
void adjust(int a[],int n) {
	int i,j,item;
	j = 0;
	item = a[j];
	i = 2*j+1;
	while(i<=n-1) {
	if(i+1 <= n-1)
    if(a[i] <a[i+1])
	i++;
	if(item<a[i]) {
	a[j] = a[i];
	j = i;
	i = 2*j+1;
	} 
	else
	break;
	}
	a[j] = item;
}
