#include <stdio.h>
int main(){
	int x = 5;
	int y = 10;
	int *a = &x;
	int *b = &y;
	printf("Before Swapping: a = %d , b = %d " , *a , *b);
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("After Swapping a = %d , b = %d " , *a , *b);
}