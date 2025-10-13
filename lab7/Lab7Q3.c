#include <stdio.h>

int main()
{
	int numbers[10]; 
	int g , p; 
	    printf("Enter 8 ages:\n");
	
	    for (g = 0; g < 8; g++) {
	        printf("Enter age %d: ", g + 1);
	        scanf("%d", &numbers[g]);	
		}
		int lowest = numbers[0];
		for (p = 0 ; p<10 ; p++){
			if (numbers[p] < lowest){
				lowest = numbers[p];
			}
		}
		printf("The smallest age is : %d \n" , lowest );
}