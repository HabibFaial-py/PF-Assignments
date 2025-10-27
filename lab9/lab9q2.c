#include <stdio.h>
float AddCartProds(int CartPrices[]){
	float total = 0;
	int i;
	for (i = 0 ; i<5 ; i++){
		total = total + CartPrices[i];
	}	
	return total ;
}
void applyDiscount(int CartPrices[]){
	int total = 0;
	int i;
	for (i = 0 ; i<5 ; i++){
		total = total + CartPrices[i];
	}
	if (total > 5000){
		total = total * 0.9 ;
		printf("Discount Applied \n");
	}
}
float DisplayBill(int CartPrices[]){
	float total = 0;
	int i;
	for (i = 0 ; i<5 ; i++){
		total = total + CartPrices[i];
	}
	if (total > 5000){
		total = total * 0.9 ;
	}
	return total;
}

int main(){
	int i;
	int CartPrices[5];
	printf("Enter 5 numbers to add elements in Cart-Array ;");
	for(i = 0 ; i<5 ; i++){
		scanf("%d" , &CartPrices[i]);
	}
	printf("The sum of the elements in Cart array is %.1f \n\n" , AddCartProds(CartPrices));
	applyDiscount(CartPrices);
	printf("The bill : %.1f" ,DisplayBill(CartPrices));
}