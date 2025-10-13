#include <stdio.h>
int main(){
	int Employees[10];
	int user_input;
	int yes = 0;
	int k , i;
	for (i = 0 ; i<10 ; i++){
		printf("Enter EmployeeId : ");
		scanf("%d" , &Employees[i]);
	}
	printf("Enter a Id to check : ");
	scanf("%d" , &user_input);
	for(k = 0; k<10 ; k++){
		if(user_input == Employees[k]){
			yes = 1;	
		}
	}
	if (yes == 1){
		printf("Id matched");
	}
	else {
		prinf("Not matched");
	}
}
