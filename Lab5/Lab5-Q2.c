#include <stdio.h>
int main(){
	int user_age;
	char user_gender;
	printf("Enter Your Age: \n");
	scanf("%d" , &user_age);
	printf("Enter your gender(F for Female / M for Male): \n");
	scanf(" %c" , &user_gender);
	if (user_age>=18){
		if ((user_gender == "F") || (user_gender == "f")){
			printf("Adult Female");
		}
		else{
			printf("Adult Male");
		}
}
	else{
		printf("Minor");
	}
}