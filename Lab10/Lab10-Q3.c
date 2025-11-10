//#include <string.h>
//#include <stdio.h>
//int main(){
//	char word[5]; 
//	int found ;
//	char grid = [2][4] = {{'C' , 'A' , 'i' , 'A'},
//							{'F' , 'C' , 'B' , 'A'}}
//	printf("Enter Word \n");
//	scanf("%s" ,word);
//	for (int i = 0 ; i<6 ; i++){
//		if word[i] == grid[0][i];
//		found = 1;
//	}else{
//		printf("Not found");
//		found = 0 ;
//		break;
//	}
//	if (found == 0){
//		printf("Not Found");
//	}else{
//		prinf("Found");
//	}
//	
//}

#include <string.h>
#include <stdio.h>

int main() {
    char word[5];
    int i;
    int found = 1; // Assume found unless proven otherwise
    char grid[2][4] = {
        {'C', 'A', 'i', 'A'},
        {'F', 'C', 'B', 'A'}
    };

    printf("Enter Word:\n");
    scanf("%4s", word); // Limit input to 4 characters to avoid overflow

    for (i = 0; i < 4; i++) {
        if (word[i] != grid[0][i]) {
            found = 0;
            break;
        }
    }

    if (found == 0) {
        printf("Not Found\n");
    } else {
        printf("Found\n");
    }

    return 0;
}
