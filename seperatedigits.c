#include <stdio.h>
#include <math.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    int y = (int)log10(x) + 1;
    int z = (int)pow(10, y - 1);
    while (z > 0) {
        int a = x / z;
        printf("%d", a);
        x = x % z;
        z = z / 10;
        if (z > 0) {
            printf(", ");
        }
    }

    printf("\n");
    return 0;
}