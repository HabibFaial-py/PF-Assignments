#include <stdio.h>
int main(){
	int total = 0;
	for (int i = 1; i <= 100 ; i = i+1){
		total = i + total ;
	}
printf("%d" , total);
return 0;
}