	#include <stdio.h>
	int main(){
		int arr[5] = {10 , 20 , 30 , 40 , 50};
		for (int i = 0 ; i<5 ; i++){
			printf("%d \t" , arr[i]);
		}
		int *start = arr;
		int *end = arr + 4;
		for (int i = 0 ; i < 5/2 ; i++){
			int temp = *(start+i);
			*(start+i) = *(end - i);
			*(end-i) = temp;
		}
		printf("After Reversing \n");
		for (int i = 0 ; i<5 ; i++){
			printf("%d \t" , arr[i]);
		}
	}