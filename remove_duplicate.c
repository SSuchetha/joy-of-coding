#include <stdio.h>
int main()
{
    int size,i,j,k;
    printf("Enter size of the array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
        scanf("%d", &arr[i]);
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                for(k=j; k < size - 1; k++)
                    arr[k] = arr[k + 1];
                size--;
                j--;
            }
        }
    }
    printf("\nArray elements after deleting duplicates : ");
    for(i=0; i<size; i++)
        printf("%d\t", arr[i]);
    printf("\n");
    return 0;
}
