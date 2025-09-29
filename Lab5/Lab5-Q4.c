#include <stdio.h>

int main() {
    int continent;
	int country;

    printf("Select Continent:\n");
    printf("1. Asia\n 2. Europe\n");
    scanf("%d", &continent);
    
    switch(continent){
    	case 1 :
    		printf("Select a Country from Asia:\n");
            printf("1. Pakistan\n2. Srilanka\n");
            scanf("%d", &country);
            
            switch(country){
            	case 1:
            		printf("You selected Pakistan\n");
            		break;
            	case 2 :
            		printf("You selected Srilanka \n");
            		break;
            	default :
            		printf("Wrong Selection \n");
			}
			break;
		case 2 :
			printf("Select a Country from Europe:\n");
            printf("1.France\n 2. Germany\n");
            scanf("%d", &country);
            
            switch(country){
            	case 1:
            		printf("You selected France\n");
            		break;
            	case 2 :
            		printf("You selected germany \n");
            		break;
            	default :
            		printf("Wrong Selection \n");
			}
return 0 ;
}
}