#include <stdio.h>

int main() {
    int device;
	int brand;

    printf("Select a device:\n");
    printf("1. Phone\n 2. Laptop\n");
    scanf("%d", &device);
    
    switch(device){
    	case 1 :
    		printf("Select a Phone brand:\n");
            printf("1. Samsung\n2. Apple\n");
            scanf("%d", &brand);
            
            switch(brand){
            	case 1:
            		printf("You selected Samsung \n");
            		break;
            	case 2 :
            		printf("You selected Apple \n");
            		break;
            	default :
            		printf("Wrong Selection \n");
			}
			break;
		case 2 :
			printf("Select a Laptop brand:\n");
            printf("1. Dell\n 2. HP\n");
            scanf("%d", &brand);
            
            switch(brand){
            	case 1:
            		printf("You selected Dell \n");
            		break;
            	case 2 :
            		printf("You selected Hp \n");
            		break;
            	default :
            		printf("Wrong Selection \n");
			}
return 0 ;
}
}
    