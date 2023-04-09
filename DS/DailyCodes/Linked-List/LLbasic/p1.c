//self-referencial structure
//it is structure pointer which is store  itself like structure's address

#include<stdio.h>
#include<string.h>

typedef struct employee{
	int employee_ID;
	char employee_name[20];
	float employee_salary;
	struct employee *next;
}emp;

void main(){
	emp emp1,emp2,emp3;

	emp1.employee_ID=1;
	strcpy(emp1.employee_name,"aarohi");
	emp1.employee_salary=10.00;
	emp1.next=&emp2;

	emp2.employee_ID=2;
	strcpy(emp2.employee_name,"shradha");
	emp2.employee_salary=20.00;
	emp2.next=&emp3;
	
	emp3.employee_ID=3;
	strcpy(emp3.employee_name,"sakshi");
	emp3.employee_salary=30.00;
	emp3.next=NULL;

	printf("\nEmployee ID is %d\n",emp1.employee_ID);
	printf("Name of employee is %s\n",emp1.employee_name);
	printf("Salary of Employee is %f\n\n\n",emp1.employee_salary);
	
	printf("Employee ID is %d\n",emp2.employee_ID);
	printf("Name of employee is %s\n",emp2.employee_name);
	printf("Salary of Employee is %f\n\n\n",emp2.employee_salary);

	printf("Employee ID is %d\n",emp2.employee_ID);
	printf("Name of employee is %s\n",emp2.employee_name);
	printf("Salary of Employee is %f\n\n\n",emp2.employee_salary);
}












