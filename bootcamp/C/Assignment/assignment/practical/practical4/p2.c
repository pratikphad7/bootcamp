//wap that accept no from user seperate digits from that no & enter them in array then sort array in ascending order

#include<stdio.h>

void main(){
	int long num,y;
	printf("enter number\n");
	scanf("%ld",&num);
	int i=0;
	int arr[10];
	int cnt=0;
	while(num!=0){
		y=num%10;
		arr[i]=y;
		num=num/10;
		i++;
		cnt++;
	}

	for(int i=0;i<cnt;i++){
		for(int j=0;j<cnt;j++){
			if(arr[i]<=arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<cnt;i++)
		printf("|%d|\t",arr[i]);
	
	printf("\n");
}
	



