//linear search

#include<stdio.h>

int ifpresent(int* arr,int size,int key){
	for(int i=0;i<size;i++){
		if(arr[i]==key)
			return i;
	}
	return -1;
}

int lstocc(int* arr, int size, int key){
	int lst=-1;
	for(int i=0;i<size;i++){
		if(arr[i]==key)
			lst=i;
	}
	return lst;
}

int seclstocc(int* arr,int size, int key){
	int lst=-1;
	int seclst=-2;
	for(int i=0;i<size;i++){
		if(arr[i]==key){
			seclst=lst;
			lst=i;
		}
	}
	return seclst;
}

void main(){
 	int size;
	printf("Enter arr size\n");
	scanf("%d",&size);
	int arr[size];
	
	printf("enter array element\n");
	for(int i=0;i<size;i++){
		scanf("%d",arr+i);
	}

	printf("Enter key value\n");
	int key;
	scanf("%d",&key);

	int index=ifpresent(arr,size,key);
	if(index>-1)
		printf("key present at %d index\n",index);
	else
		printf("key not found\n");

	index=lstocc(arr,size,key);
	if(index>-1)
		printf("key present last at on %d index\n",index);
	else
		printf("key not found\n");

	index=seclstocc(arr,size,key);
	if(index>-1)
		printf("key present second last at on %d index\n",index);
	else if(index==-1)
		printf("key present only once\n");
	else
		printf("key not found");
	
}
