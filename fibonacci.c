#include <stdio.h>

int fib(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    
    return fib(n - 1) + fib(n - 2);
    // 0 1 1 2 3 5 8 13 21
    //   n-2  n-1  n
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        printf("%d ", fib(i));
    }

    return 0;
}
