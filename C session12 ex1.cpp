#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int x = 7, y = 4;
    int result = sum(x, y);
    printf("Tong cua %d va %d la: %d\n", x, y, result);
    
    return 0;
}

