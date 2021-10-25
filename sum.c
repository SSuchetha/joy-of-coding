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
	for(int i=0; i<n; i++)	//2
	{
		final_sum=a[i];	//4
		count_index=0;	//
		sub_array[count_index]=a[i];	//s[0]=4
		index[count_index]=i; //i[0]=2 
		if(final_sum==target)
		{
			flag=1;
			count_index++;
			break;
		}
		for(int j=i+1; j<n; j++)//3
		{
			final_sum+=a[j];	//13
			if(final_sum>target)
				break;		//count_index=1
			sub_array[++count_index]=a[j];	//s[1]=9
			index[count_index]=j;		//i[1]=3			
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
		for(int i=0; i<=count_index; i++)
			printf("%d " , sub_array[i]);
		printf("\n");
		printf("%d %d" , index[0] , index[count_index-1]);
	}
	
}
