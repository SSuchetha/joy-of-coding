#include<stdio.h>
void main()
{
	int n;
	int arr[40];
	printf("Enter number of values \n");
	scanf("%d" , &n);
	printf("Enter array elements\n");
	for(int i=0; i<n; i++)
		scanf("%d" , &arr[i]);
	int index=1;
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(arr[i]==arr[i-1])
			{
				index=0;
				break;
			}
		}

	}
	if(index==0)
		printf("Array not distinct\n");
	else
		printf("Array distinct\n");
}
