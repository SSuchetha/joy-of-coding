#include<stdio.h>
void main()
{
	int n,target;
	printf("Enter number of elements\n");
	scanf("%d" , &n);
	int a[n];
	printf("Enter elements\n");
	for(int i=0; i<n; i++)
		scanf("%d" , &a[i]);
	printf("Enter sum\n");
	scanf("%d" , &target);
	int index[n];
	int sub_array[n];
	int final_sum,count_index,flag=0;
	for(int i=0; i<n; i++)	
	{
		final_sum=a[i];	
		count_index=0;	
		sub_array[count_index]=a[i];	
		index[count_index]=i; 
		if(final_sum==target)
		{
			flag=1;
			count_index++;
			break;
		}
		for(int j=i+1; j<n; j++)
		{
			final_sum+=a[j];	
			if(final_sum>target)
				break;		
			sub_array[++count_index]=a[j];	
			index[count_index]=j;					
			if(final_sum==target)
			{
				flag=1;
				break;
			}	
		}
		if(flag==1)
			break;
	}
	if(flag==0)
		printf("Not possible to obtain the sum\n");
	else
	{
		printf("The sub array is \n");
		for(int i=0; i<=count_index; i++)
			printf("%d " , sub_array[i]);
		printf("\n");
		printf("The indices are %d %d" , index[0] , index[count_index-1]");
	}
	
}
