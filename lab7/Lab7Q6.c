#include <stdio.h>
int main() {
    int arr[10];
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++) {
        if (arr[i] > 0)
            sum += arr[i];
    }
    printf("Sum of positive values: %d\n", sum);
    return 0;
}
