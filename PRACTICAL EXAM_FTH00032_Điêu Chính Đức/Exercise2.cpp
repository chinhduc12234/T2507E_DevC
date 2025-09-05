#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size!\n");
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Element %d = ", i);
        scanf("%d", &arr[i]);
    }

    int found = 0;
    printf("Prime numbers in the array: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 2) {
            int isPrime = 1;
            for (int j = 2; j * j <= arr[i]; j++) {
                if (arr[i] % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime) {
                printf("%d ", arr[i]);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("No prime number");
    }
}

