#include<stdio.h>
#include<stdlib.h>

void main(){
	int size;
	printf("enter size\n");
	scanf("%d",&size);

	int *arr=(int*)calloc(size,sizeof(int));
	
	for(int i=0;i<size;i++){
		scanf("%d",arr+i);
	}
	for(int i=0;i<size;i++){
		for(int j=i;j<size;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

	int* ptr=arr;
	int x=1;
	for(int i=1;i<size;i++){
		if(arr[i]!=(*ptr)){
			arr[x]=arr[i];
			x++;
			
		}
		ptr++;
	
	}
	printf("%d\n",*arr);
	//free(arr);
	int* rll=(int*)realloc(arr,(x));
	printf("%d\n",*arr);
	
		
	for(int i=0;i<x;i++){
		rll[i]=arr[i];
		printf("arr[%d]=%d\n",i,arr[i]);

	}
		free(rll);
	printf("%d\n",*arr);
	
//	printf("sizeof arr is %ld\n",sizeof(arr));
}

