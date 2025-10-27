#include <stdio.h>

void PrintGreetings(){
	printf("Hello World \n");
}
int SumOfNumbers(int a , int b){
	return (a+b);
}
int maxNumber(int a , int b){
	if (a>b){
		return a;
	}
	else if (a<b){
		return b;
	}
	else{
		return 0;
	}
}
void EvenNumber(int a){
	if (a % 2 == 0){
		printf("Even Number \n");
	}
	else{
		printf("Odd number \n");
	}
}
int addArrays(int numbers[]){
	int total = 0;
	int i;
	for (i = 0 ; i<5 ; i++){
		total = total + numbers[i];
	}
	return total;
}

float CalculateInterest(int principal, int rate, int time) {
	float Interest = (principal * rate * time) / 100.0;
	return Interest;
}
int UpdateBalance(int principal , int interest){
	int total = principal + interest;
	return total; 
}
float AddCartProds( int CartPrices[]){
	int total = 0;
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
		printf("Discount Applied");
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
		printf("Discount Applied");
	}
	return total;
}


int main(){
	int i;
	int CartPrices[5];
	int numbers[5];
	PrintGreetings();
	printf("The Sum of 2 numbers is : %d\n" , SumOfNumbers(12 , 24));
	printf("The Max number is %d \n" , maxNumber(12,24));
	printf("The Max number is %d \n" , maxNumber(10 , 10));
	EvenNumber(100);
	printf("Enter 5 numbers to add elements in Array ;");
	for(i = 0 ; i<5 ; i++){
		scanf("%d" , &numbers[i]);
	}
	printf("The sum of the elemts in number array is %d \n\n" , addArrays(numbers));
	printf("Interset Calculated is \t %.1f :\n" ,(CalculateInterest(5000 , 5 , 4)));
	printf("Total Balance after Adding Interest is : %d  " , UpdateBalance(5000 , 1000));
	
	printf("Enter 5 numbers to add elements in Cart-Array ;");
	for(i = 0 ; i<5 ; i++){
		scanf("%d" , &CartPrices[i]);
	}
	printf("The sum of the elements in Cart array is %d \n\n" , AddCartProds(CartPrices));
	applyDiscount(CartPrices);
	printf("The bill : %.1f" ,DisplayBill(CartPrices));
}
