#include<stdio.h>
void sort(int *arr,int N){
    int temp=0;
    for(int i=1;i<N;i++){
        temp=arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(temp<arr[j]){
                arr[j+1]=arr[j];
            }else{
                break;
            } 
            if(j<0)
                arr[0]=temp;  
            else
                arr[j]=temp;        
        }
    }
}
void main(){
    int arr[]={1,3,7,4,3,2};
    sort(arr,6);

    for(int i=0;i<6;i++){
        printf("%d\t",arr[i]);
    }
}
