#include<stdio.h>
int m,n;
void anticlockwise(int arr[m][n], int c, int d)
{
	int temp[c][d];
	int a=0,b=0;
	for(int i=0; i<c; i++)
	{	
		for(int j=d-1; j>=0; j--)
		{
			temp[j][i]=arr[a][b];
			b++;
		}
		a++;
	}
	for(int x=0; x<c; x++)
	{
		for(int y=0; y<d; y++)
			printf("%d " , temp[x][y]);
		printf("\n");
	}
}

void main()
{
	int m,n;
	printf("Enter order of matrix\n");
	scanf("%d %d" , &m , &n);
	int arr[m][n];
	printf("Enter array\n");
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			scanf("%d" , &arr[i][j]);
	anticlockwise(arr,m,n);
}
