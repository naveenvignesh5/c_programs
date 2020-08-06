#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Prime number is not passed");
        return 0;
    }

    int i, isPrime = 1, n = atoi(argv[1]); // number to checked
    int limit = fabs(sqrt(n));

    for (i = 2; i < limit; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    printf("\n\n");

    if (isPrime) {
        printf("%d is prime", n);
    }
    else {
        printf("%d is not a prime", n);
    }

    printf("\n\n");
    return 0;
}