#include <stdio.h>
int main() {
    int array1[] = {1,2,3,4,5};
    int array2[] = {3,4,5,6,7,8};
    int inter[100];
    int count = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            if (array1[i] == array2[j]) {
                inter[count] = array1[i];
                count = count + 1;
                break;
            }
        }
    }

    printf("Intersection:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", inter[i]);
    }

    return 0;
}
