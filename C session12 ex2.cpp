#include <stdio.h>

void Mang(int list[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", list[i]);
    }
    printf("\n"); 
}

int main() {
    int list[] = {1, 2, 3, 4, 5};
    int n = sizeof(list) / sizeof(list[0]);
    Mang(list, n);
    
    return 0;
}

