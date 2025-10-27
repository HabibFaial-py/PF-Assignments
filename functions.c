#include <stdio.h>
float CalculateInterest(int principal, int rate, int time) {
	float Interest = (principal * rate * time) / 100.0;
	return Interest;
}
int UpdateBalance(int principal , int interest){
	int total = principal + interest;
	return total; 
}
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
	printf("Interset Calculated is \t : %.1f \n\n\n" ,(CalculateInterest(5000 , 5 , 4)));
	printf("Total Balance after Adding Interest is : %d \n\n\n " , UpdateBalance(5000 , 1000));
	printf("Enter 5 numbers to add elements in Cart-Array ;");
	for(i = 0 ; i<5 ; i++){
		scanf("%d" , &CartPrices[i]);
	}
	printf("The sum of the elements in Cart array is %.1f \n\n" , AddCartProds(CartPrices));
	applyDiscount(CartPrices);
	printf("The bill : %.1f" ,DisplayBill(CartPrices));
}
