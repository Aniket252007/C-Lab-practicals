#include <stdio.h>

int sumDigits(int n) {
    if(n == 0) {
        return 0;
    }
    if(n==1){
        return 1;
    }

    return (n % 10) + sumDigits(n / 10);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits = %d", sumDigits(num));

    return 0;
}