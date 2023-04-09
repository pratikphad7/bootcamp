//selection sort on array
//3 6 1 8 2

#include<stdio.h>

void sorting(int *arr,int size)
{
	for(int j=0;j<size;j++)
	{
			
		for(int i=size-1;i>j;i--)
		{
			if(arr[i]<arr[i-1])
			{
				int temp=arr[i];
				arr[i]=arr[i-1];
				arr[i-1]=temp;
			}
		}
	}
}

void main()
{
	int size;
	printf("Enter size\n");
	scanf("%d",&size);

	int arr[size];

	printf("Enter element\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",arr+i);
	}

	sorting(arr,size);
	
	for(int i=0;i<size;i++)
	{
		printf("%d\t",*(arr+i));
	}
	printf("\n");
}
