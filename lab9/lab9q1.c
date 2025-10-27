#include <stdio.h>
float CalculateInterest(int principal, int rate, int time) {
	float Interest = (principal * rate * time) / 100.0;
	return Interest;
}
int UpdateBalance(int principal , int interest){
	int total = principal + interest;
	return total; 
}
int main(){
	printf("Pricnipal : 5000 \n Rate : 5% \n Time : 4yrs \n ");
	printf("Interset Calculated is  : %.1f \n\n\n" ,(CalculateInterest(5000 , 5 , 4)));
	printf("Principal : 5000 \n Interest : 1000 \n ");
	printf("Total Balance after Adding Interest is : %d \n\n\n " , UpdateBalance(5000 , 1000));
}