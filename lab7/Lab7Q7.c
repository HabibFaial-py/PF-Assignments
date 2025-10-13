int main(){
	char user_input[100];
	int sum = 0;
	printf("Enter a password: \n");
	scanf("%s" , user_input);
	for(int i = 0 ; i < 100 ; i++){
		char ch = user_input[i];
		if (ch >= '0' && ch <= '9'){
			sum = sum + (ch-'0');
		}
	}
	printf("The total is : %d" , sum);
	return 0 ;
}