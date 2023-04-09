//wap that accept no from user saperate digits from that no and enter them in an array then sort the array in descending array 

#include<stdio.h>

void main(){
	long num;
	printf("enter num\n");
	scanf("%ld",&num);
	int cnt=0;
	int i=0;
	int arr[10];
	while(num != 0){
		int y=num%10;
		arr[i]=y;
		num=num/10;
		i++;
		cnt++;
	}
	int x=0;

	for(int i=0;i<cnt;i++){
		for(int j=i;j>=0;j--){
			
			if(arr[i]=arr[j]){
				x++;
	
			}
			if(count==1){
				arr[k]=arr[i];
			}

			if(arr[i]<arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		
	}

	for(int i=0;i<cnt;i++){
		printf("|%d| ",arr[i]);
	}

	printf("\n");
}
			

