#include <stdio.h>
int main(){
	int num ;
	printf("Enter Number to check palidromicity: ");
	scanf("%d" , &num);
	int original = num;
	int reverse = 0 , digit;
	while (num >0){
		digit = num % 10;
		reverse = (reverse*10) + digit;
		num = num/10;
	}
	if (reverse == original ){
		printf("It is a Palindrome \n");
	}else{
		printf("Not a Palindrome .");
	}
}