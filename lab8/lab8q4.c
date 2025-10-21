#include <stdio.h>
int main(){
	int marks[5][3] = {
			{80, 75, 90},
			{60, 70, 65},
			{78, 82, 88},
			{92, 85, 89},
			{55, 60, 58}
			};
	int count = 0;
	for (int i = 0 ; i<5 ; i++){
		int total = 0;
		for (int j = 0 ; j<3 ; j++){
			total = total + marks[i][j];
		}
		printf(" \n Marks of Student %d \t" , i+1);
		printf("%d" , total);
	}
	printf("\n");
	for (int j = 0; j < 3; j++) {      
        int total = 0;
        for (int i = 0; i < 5; i++) {    
            total = total + marks[i][j];
        }
        float average = total / 5.0; 
        printf("Average marks in Subject %d = %.2f\n", j + 1, average);
    }
    
    int temps[7][3] = {
    {22, 30, 25},  
    {23, 31, 26},  
    {21, 29, 24},  
    {24, 32, 27},  
    {25, 33, 28},  
    {22, 30, 26},  
    {23, 31, 25}};
    printf("Temperature Table \n");
    for(int i = 0 ; i<7 ; i++){
    	for (int j = 0 ; j<3 ; j++){
    		printf("%d \t" , temps[i][j]);
		}
		printf("\n");
	}
	for( int i = 0 ; i<7 ; i++){
		int total = 0;
		for (int j = 0 ; j<3 ; j++){
			total = total + temps[i][j];
		}
		printf("The avergae Temps for DAY \t %d is \t %.1f  \n:" , i+1 , total/3.0);
	}
}