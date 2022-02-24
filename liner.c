#include<stdio.h>
void main()
{
	int n,a[20],i=0,s,k=0;
	printf("Enterthe maximumn number of elements:");
	scanf("%d",&n);
	printf("Enter the Elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the search Elements:"); 
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			k=1;
			break;
		}
		}
		if(k==1)
		{
		printf("The element is found in the loic:%d",i+1);
	}
	else
	printf("The element is not found");
	}

	
