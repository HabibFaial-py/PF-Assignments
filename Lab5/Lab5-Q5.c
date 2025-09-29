#include <stdio.h>

int main(){
	int user_number;
	printf("Enter a number : \n");
	scanf("%d" , &user_number);
	if ((user_number % 2 == 0 )&& (user_number) % 3 == 0){
		printf("The number is divisible by both 2 and 3");
	}
	else{
		printf("Not Divisible");
	}
}