#include <stdio.h>

int sumArray(int arr[], int n) {
    int i, sum = 0;

    for(i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    return sum;
}
int main() {
    int arr[100], n, i, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    result = sumArray(arr, n);
    printf("Sum of array elements = %d", result);

    return 0;
}