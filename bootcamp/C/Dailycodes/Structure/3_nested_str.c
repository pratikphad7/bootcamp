
	#include<stdio.h>

	struct employee{
		char emp_name[20];
		int emp_id;
	};

	struct project_info{
		char framework[10];
		int no_of_emp;
	};

	struct project{
		char client[10];
		struct employee object1;
		struct project_info object2;
	};

	void main(){
		struct project object={"Binecaps",{"Tejas",2435},{"Flutter",20}};

		printf("client - %s\n\n",object.client);

		printf("employee name - %s\n",object.object1.emp_name);
		printf("employee id - %d\n\n",object.object1.emp_id);

		printf("framework - %s\n",object.object2.framework);
		printf("no of employees  - %d\n\n",object.object2.no_of_emp);
	}


