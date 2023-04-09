//       0  1  2  3  4  5  6  7  8
//arr[]={5, 6, 7, 8, 9, 1, 2, 3, 4}
#include<stdio.h>

int search(int* nums, int numsSize, int target){
        int start=0;
        int end=numsSize-1;
        int mid=-1;

        while(start<=end){
                mid=(start+end)/2;

                if(nums[mid]==target)
                        return mid;
                else{
                        if(nums[mid]<target&&nums[start]<target)
                                start=mid+1;

                        else if(nums[mid]>target&&nums[end]>target&&nums[start]<target)
                                end=mid-1;

                        else if(nums[mid]<target&&nums[start]>target)
                                start=mid+1;

                        else if(nums[mid]>target&&nums[start]>target&&nums[end]<target)
                                start=mid+1;

                        else if(nums[mid]>target&&nums[end]>target&&nums[start]>target){
				if(nums[mid-1]<=target)
					end=mid-1;
				else
                            		start=mid+1;
                        }

                        else if(nums[end]==target)
                                return end;

                        else if(nums[start]==target)
                                return start;

                        else
                                end=mid-1;
                }
        }
        return -1;
}

void main(){
	printf("Enter size\n");
	int size;
	scanf("%d",&size);

	int arr[size];
	
	printf("Enter element\n");
	for(int i=0;i<size;i++){
		scanf("%d",arr+i);
	}
	
	printf("Enter key\n");
	int key;
	scanf("%d",&key);

	int index=search(arr,size,key);
	printf("index=%d\n",index);
}
