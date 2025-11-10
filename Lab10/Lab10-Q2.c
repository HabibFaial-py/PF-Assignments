#include <stdio.h>
#include <string.h>
int main(){
	char firstname[20];
	char lastname[20];
	char greeting[30] = "Hello ";
	char nickname[6];
	scanf("%s" , firstname);
	scanf("%s" , lastname);
	strcat(greeting , firstname);
	strcat(greeting , " ");
	strcat(greeting , lastname);
	strcat(greeting , " ");
	strcat(greeting , "!");
//	printf("%s" , greeting);
	if (strcmp(lastname , "Ali") == 0){
		strcat(greeting , "(VIP)");
		printf("%s" , greeting);
	}
	printf("\n\n\n\n");
	strncpy(nickname , firstname , 2);
	int len = strlen(lastname);
    strncpy(nickname + 2, lastname + len - 3, 3);
	printf("nickname : %s" , nickname);
	return 0 ; 
}
