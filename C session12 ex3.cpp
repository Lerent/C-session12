#include <stdio.h>

long long value(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i; 
    }
    return result;
}
int main() {
    int n = 7;
    long long result = value(n);
    printf("Giai thua cua %d la: %lld\n", n, result);
    
    return 0;
}

