#include <stdio.h>
int main(){
	int marks[5];
	for (int i = 0 ; i<5 ; i++){
		printf("Enter value %d : " , i+1);
		scanf("%d" , &marks[i]);
	}
	int *ptr = marks;
	int highest = *ptr;
	for (int i = 1 ; i<5 ; i++){
		if (*(ptr + i)>highest){
			*ptr = marks[i];
			highest = *(ptr+i);
		}
	}
	printf("The highest ELemnts is : %d" , highest);
	return 0 ;
}