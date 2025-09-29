#include <stdio.h>
int main(){
	int user_marks;
	printf("Enter marks Obtained:\n");
	scanf("%d" , &user_marks);
	if (user_marks >= 50){
		if (user_marks >=85){
			printf("Passed with Distinction");
		}
		else{
			printf("Just Passed");
		}
	}
	else{
		printf("Failed");
	}
	return 0;
}