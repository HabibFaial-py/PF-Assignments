#include <stdio.h>
int main(){
	int numbers[12];
	int user_input;
	int newarray[12];
	int l = 0;
	for ( int i = 0 ; i < 12 ; i++){
		printf("Enter Number %d :" , i+1);
		scanf("%d" , &numbers[i]);
	}
	printf("Enter number to Remove: ");
	scanf("%d" , &user_input);
	
	for (int j = 0 ; j < 12 ; j++){
		if (numbers[j] != user_input){
			newarray[l] = numbers[j];
			l++;
		}
	
	}
	for (int k = 0 ; k<(sizeof(newarray)/(sizeof(newarray[0]))) ; k++){
		printf("%d \t" , newarray[k]);
	}
}	