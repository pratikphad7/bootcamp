#include<stdio.h>

struct demo{
        int x;
        float f;
};

void main(){
        struct demo obj={14,10.8f};
        int arr[]={10,20,30};

        printf("%p\n",&arr[0]);
        printf("%p\n",arr);
        printf("%p\n",&obj.x);
        printf("%d\n",obj);
}
