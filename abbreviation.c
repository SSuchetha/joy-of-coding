#include<stdio.h>
#include<string.h>
void main()
{
	int n;
	printf("Enter the number of charaters\n");
	scanf("%d" , &n);
	char str[n];
	printf("Enter the string\n");
	for(int i=0; i<n; i++)
		scanf("%c" , &str[i]);
	char abbr[n];
	int index=0;
	for(int i=0; i<n; i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			abbr[index]=str[i];
			index++;
		}
	}
	for(int i=0; i<index; i++)
		printf("%c" , abbr[i]);
	printf("\n");
}
