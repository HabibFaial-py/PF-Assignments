#include <stdio.h>
int main(){
	int num1 , num2 ,   num3 ;
	printf("Enter number 1 \n");
	scanf("%d" , &num1);
	printf("Enter number 2 \n");
	scanf("%d" , &num2);
	printf("Enter number 3 \n");
	scanf("%d" , &num3);
	
	int smallest = (num1<num2) ? ( (num1<num3)? num1:num3 ): ( (num2<num3) ? num2:num3);
	printf("The smallest number is , %d" , smallest);
	return 0 ;
}


