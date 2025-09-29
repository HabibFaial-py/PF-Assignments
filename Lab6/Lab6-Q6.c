#include <stdio.h>
int main(){
	int user_number;
	printf("Enter a number : \n");
	scanf("%d" , &user_number);
	for (int i = 2 ; i <= user_number - 1 ; i = i+1){
		if ((user_number%i) != 0){
			printf("Prime Number");
			break;
		}
		else{
			printf("Not a prime number \n");
			break;
		}
	}
}