#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct employee{
	int emp_id;
	char emp_name[20];
	float sal;
	struct employee *next;
}emp;

void main(){
	emp *ptr=(emp*)malloc(sizeof(emp));
	emp *ptr1=(emp*)malloc(sizeof(emp));
	emp *ptr2=(emp*)malloc(sizeof(emp));
	emp *ptr3=(emp*)malloc(sizeof(emp));

	ptr->emp_id=1;
	strcpy(ptr->emp_name,"tejas");
	ptr->sal=60.0;
	ptr->next=ptr1;

	ptr1->emp_id=2;
	strcpy(ptr1->emp_name,"avi");
	ptr1->sal=70.0;
	ptr1->next=ptr2;

	ptr2->emp_id=3;
	strcpy(ptr2->emp_name,"akash");
	ptr2->sal=80.0;
	ptr2->next=ptr3;

	ptr3->emp_id=4;
	strcpy(ptr3->emp_name,"kiran");
	ptr3->sal=90.0;
	ptr3->next=NULL;
	
	printf("emp ID =  %d\n",ptr->emp_id);
	printf("emp name = %s\n",ptr->emp_name);
	printf("emp sal = %f\n",ptr->sal);
	
	printf("\nemp ID =  %d\n",ptr1->emp_id);
	printf("emp name = %s\n",ptr1->emp_name);
	printf("emp sal = %f\n",ptr1->sal);
	
	printf("\nemp ID =  %d\n",ptr2->emp_id);
	printf("emp name = %s\n",ptr2->emp_name);
	printf("emp sal = %f\n",ptr2->sal);

	printf("\nemp ID =  %d\n",ptr3->emp_id);
	printf("emp name = %s\n",ptr3->emp_name);
	printf("emp sal = %f\n",ptr3->sal);
}
