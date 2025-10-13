#include <stdio.h>
int main(){
	int numbers[10];
	int yes = 0;
	for(int i= 0 ; i<10 ; i++){
		printf("Enter number %d : " , i+1);
		scanf("%d" , &numbers[i]);
	}
	for (int j = 0 ; j<9 ; j++){
		if (numbers[j] > numbers[j+1]){
			yes = 1;
		}
	}
	if (yes == 1){
		printf("The array is NOT ascending order");
	}else{
		printf("The array is in ascending order");
	}
}