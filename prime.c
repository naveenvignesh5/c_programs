#include<stdio.h>
#include<math.h>

int main() {
    int i,n = 11; // number to checked
    int isPrime = 0;
    for (i = 2;i < sqrt(11); i += 1) {
        if (i % n == 0) {
            continue;
        }
        isPrime = 1;
    }

    printf("\n\n");

    if (isPrime) {
        printf("%d is prime", n);
    } else {
        printf("%d is not a prime", n);
    }
    
    printf("\n\n");
    return 0;
}