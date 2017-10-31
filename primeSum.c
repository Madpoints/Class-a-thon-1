#include <stdio.h>
#include <cs50.h>
#include <math.h>

int sumPrime(int num);

int isPrime(int digit);

int main(int argc, string argv[]) {
    if (argc != 2) {
        printf("Give me 1 argument please.\n");
        return 1;
    }

    int num = atoi(argv[1]);

    int sum = sumPrime(num);

    printf("%d\n", sum);
}

int sumPrime(int num) {
    int digit = 0;

    while (num) {
        if (isPrime(num)) {
            digit += num;
        }
        num--;
    }

    return digit -1;
}

int isPrime(int digit) {
    for (int i = 1; i < digit; i++) {
        if (digit % i == 0 && i != 1 && i != digit) {
            return 0;
        }
    }
    return 1;
}