#include<stdio.h>
#include<string.h>
int max(int a,int b)
{
	if(a>b)
		return a;
	return b;
}

void main()
{
	int n;
	printf("Enter number of characters\n");
	scanf("%d" , &n);
	char str[n];
	printf("Enter sentence\n");
	for(int i=0; i<n; i++)
		scanf("%c" , &str[i]);
	char temp[10];
	int count=0,final_count=0,j;
	char answer;
	for(int i=0; i<n; i++)
	{
		answer=str[i];
		count=1;
		for(int j=0; j<n; j++)
		{
			if((strcmp(str[i],str[j]))==0)
				count++;
		}
		final_count=max(final_count,count);
		answer=str[j];
	}
	printf("%d" , final_count-1);
}
