#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int heads = 0, tails = 0;
    int result;

    srand((unsigned int)time(NULL));

    printf("Tossing a coin...\n");
    for (int round = 1; round <= 3; round++) {
        result = rand() % 2;
        if (result == 0) {
            printf("Round %d: Heads\n", round);
            heads++;
        } else {
            printf("Round %d: Tails\n", round);
            tails++;
        }
    }

    printf("Heads: %d, Tails: %d\n", heads, tails);

    if (heads > tails) {
        printf("You won\n");
    } else {
        printf("You lost\n");
    }

    return 0;
}
