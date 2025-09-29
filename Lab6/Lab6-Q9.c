#include <stdio.h>
int main(){
	int user_number;
	printf("Enter a number : \n");
	scanf("%d" , &user_number);
	for (int i = 1; i<=10 ; i++){
		printf("%d\t x \t %d \t = \t %d \n" ,user_number , i , user_number*i );
	}
return 0;
}