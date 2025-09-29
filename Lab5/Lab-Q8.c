#include <stdio.h>
int main(){
	int user_number;
	printf("Enter number : \n");
	scanf("%d" , &user_number);
	int mask = 1 << 2; //bit 2 is 1
	int result = user_number ^ mask;
	printf("The number after toggling is %d :" , result);
	return 0 ;
}