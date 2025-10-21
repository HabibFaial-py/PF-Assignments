#include <stdio.h>
int main() {
    int array[] = {1,2,3,4,5};
    int array2[] = {3,4,5,6,7,8};
    int farray[100];
    int count = 0;

    for (int i = 0; i < 5; i++) {
        farray[count] = array[i];
        count = count + 1;
    }

    for (int j = 0; j < 6; j++) {
        int found = 0;
        for (int k = 0; k < count; k++) {
            if (array2[j] == farray[k]) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            farray[count] = array2[j];
            count = count + 1;
        }
    }

	printf("Array 1 :\n");
	printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("Array 2 : \n");
    printf("\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", array2[i]);
    }
    printf("\n");
    printf("Union:\n");
	printf("\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", farray[i]);
    }

    return 0;
}
