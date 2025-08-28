#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int x[10];
    int y = 0;
    float z;

    srand(time(NULL));

    printf("Random numbers:\n");
    for (int i = 0; i < 10; i++) {
        x[i] = rand() % 100 + 1;
        printf("%d ", x[i]);
        y += x[i];
    }

    z = y / 10.0;

    printf("\n\nSum = %d\n", y);
    printf("Mean = %.2f\n", z);

    return 0;
}