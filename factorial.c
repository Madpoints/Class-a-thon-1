#include <stdio.h>
#include <cs50.h>
#include <math.h>

long long int factorialize(int num);

int main(int argc, string argv[]) {
    if (argc != 2) {
        printf("Give me 1 argument please.\n");
        return 1;
    }

    int num = atoi(argv[1]);

    long long int total = factorialize(num);

    printf("%lld\n", total);
}

long long int factorialize(int num) {
  if (num == 0) {
    return 1;
  }

  return num * factorialize(num - 1);
}
