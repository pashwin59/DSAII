#include <stdio.h>

void printName(int n) {
    if (n == 0)
        return;     // base case: stop when n becomes 0

    printf("Ashwin\n");   
    printName(n - 1);     // recursive call
}

int main() {
    int n;
    scanf("%d", &n);

    printName(n);

    return 0;
}
