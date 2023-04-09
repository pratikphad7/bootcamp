//bubble sort on array
//7 9 3 6 2 8 2-> 7 9 9 9 9 9
//		  3 7 7 7 8 9
//		  3 6 6 6 8 9
//		  2 3 3 6 8 9
//		  2 2 3 6 8 9
#include<stdio.h>

void sorting(int *arr,int size)
{
	for(int j=0;j<size;j++)
	{
		
		for(int i=0;i<size-j-1;i++)
		{
			if(arr[i]>arr[i+1])
			{
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
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
