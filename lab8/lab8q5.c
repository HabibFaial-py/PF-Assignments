#include <stdio.h>
int main(){
	char ch = 'A';
	int user_input;
	printf("Enter size:");
	scanf("%d" , &user_input);
		for (int i = 1 ; i<=user_input ; i++){
			for(int j = 0 ; j<i ; j++){
				printf("%c" , ch);
				ch++;
			}
			printf("\n");
		}
}