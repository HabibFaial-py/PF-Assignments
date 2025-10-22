#include <stdio.h>

int main() {
    int array[] = {1,1, 2, 2, 3,3, 4, 5};
    int array2[] = {3,3, 4, 5,50, 6, 7,7, 8};
    int farray[100];
    int count = 0;

    int size1 = sizeof(array) / sizeof(array[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    
    for (int i = 0; i < size1; i++) {
        int found = 0;
        for (int k = 0; k < count; k++) {
            if (farray[k] == array[i]) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            farray[count] = array[i];
            count++;
        }
    }

    for (int j = 0; j < size2; j++) {
        int found = 0;
        for (int k = 0; k < count; k++) {
            if (farray[k] == array2[j]) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            farray[count++] = array2[j];
        }
    }

    printf("Union:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", farray[i]);
    }

    return 0;
}

