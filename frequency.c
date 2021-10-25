#include<stdio.h>
void main()
{
	int n,arr[40];
	printf("Enter number of elements\n");
	scanf("%d" , &n);
	printf("Enter array elements\n");
	for(int i=0; i<n; i++)
		scanf("%d" , &arr[i]);
	
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(arr[i]>arr[j])
			{	
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}	
	
	int f=0;
	for(int i=0; i<n; i=i+f)
	{
		f=1;
		for(int j=i+1; j<n; j++)
		{
			if(arr[i]==arr[j])
				f++;
		}	
		printf("Number of %d's is %d \n" , arr[i] , f);
	}
}

