#include <stdio.h>
int main(){
	int arr[50];
	int i;
	int j;
	int k;
	int l;
	int m , p , g , o , b;
	int count = 0;
	for(i = 0; i<50; i++){
		arr[i] = i+1;
	}
	for(j = 0; j<50; j++){
		printf("%d \t" , arr[j]);
	}
	printf("\n");
	printf("Size of Array : %d \t \n" , sizeof(arr));
	printf("Number of elements : %d \n" ,sizeof(arr)/sizeof(arr[0]));
	
	char allCharacters[] = {'H' ,'E' ,'L', 'L' ,'O'};
	char charWord[5] = "hello";
	printf("Size of Array : %d \t \n" , sizeof(allCharacters));
	printf("Size of Array : %d \t \n" , sizeof(charWord));
	for( k= 0 ; k<5 ;k++ ){
		printf("%c" , allCharacters[k]);
	}
	printf("\n");
	for( l= 0 ; l<5 ; l++ ){
		printf("%c" , charWord[l]);
	}
	printf("\n");
	
    for(m= 0 ; m<5 ; m++){
    	if (allCharacters[m] == 'L'){
    		count = count + 1;
		}
	}
	printf("L is Repeated : %d" , count);
	
	int numbers[10];  

    printf("Enter 10 ages:\n");

    for (g = 0; g < 10; g++) {
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
	
	for (o = 0; o < 10 / 2; o++) {
    int temp = numbers[o];
    numbers[o] = numbers[10 - o -1];
    numbers[10-o-1] = temp;
	}
	for (b = 0; b < 10; b++) {
    printf("%d \n", numbers[b]);
	}
	
    char input[100];
    printf("Enter letters only (a-z, A-Z): ");
    scanf(" %[a-zA-Z]", input);
    printf("You entered: %s\n", input);
    return 0;

	
	
}


	

