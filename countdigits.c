#include <stdio.h>
#include <math.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    int y = (int)log10(x) + 1;
    printf("%d",y);
    return 0;
}