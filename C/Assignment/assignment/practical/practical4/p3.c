//wap that accept an array on length n from the user and calculate squares of all even elements and cubes of all odd numbers from that array replaces the elements respectively with the ans

#include<stdio.h>

void main(){
	int size;
	printf("enter size\n");
	scanf("%d",&size);
	int arr[size];

	for(int i=0;i<size;i++){
		printf("enter element\n");
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++){
		int x=arr[i];
		if(x%2==0){
			x=x*x;
		}else{
			x=x*x*x;
		}
		arr[i]=x;
		printf("|%d|  ",*(arr+i));
	}
	printf("\n");
}
