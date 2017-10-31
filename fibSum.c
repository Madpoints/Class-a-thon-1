#include <stdio.h>
#include <cs50.h>
#include <math.h>

int sumFib(int num);

int main(int argc, string argv[]) {
    if (argc != 2) {
        printf("Give me 1 argument please.\n");
        return 1;
    }

    int num = atoi(argv[1]);

    int sum = sumFib(num);

    printf("%d\n", sum);
}

int sumFib(int num) {
    int sum = 0;
    for (int i = 1; i <= num; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    return sum + 1;
}