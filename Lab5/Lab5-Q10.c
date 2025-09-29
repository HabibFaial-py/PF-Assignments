#include <stdio.h>
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d" ,&num);
	printf("Original number: %d\n", num);
	printf("num << 1 = %d \n" , num << 1); // Left Shift (num = num*2)
	printf("num >> 1 = %d \n" , num >> 1); // Right Shift(num = num/2)
	return 0 ;
}