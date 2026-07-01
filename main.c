#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void) {
    char name[100];
    int heads = 0, tails = 0;
    int result;

    srand((unsigned int)time(NULL));

    printf("Who are you?\n> ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Hello, %s!\n", name);

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

    return 0;
}
