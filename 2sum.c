#include<stdio.h>
void main()
{
	int n,target;
	printf("Enter number of elements in array\n");
	scanf("%d" , &n);
	int arr[n];
	printf("Enter array elements\n");
	for(int i=0; i<n; i++)
		scanf("%d" , &arr[i]);
	printf("Enter target sum\n");
	scanf("%d" , &target);
	int flag=0;
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(arr[i]+arr[j]==target)
			{
				flag=1;
				printf("Indices are found at %d and %d\n" , i , j);
				break;
			}		
		}
		if(flag==1)
			break;
	}
	if(flag==0)
		printf("No indices found\n");
}
