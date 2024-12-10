#include <stdio.h>

int checkperfectvalue(int n) {
    if (n <= 0) {
        return 0;
    }
    int tong = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }
    return (tong == n);
}
int main() {
    int a, b;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &b);
    if (checkperfectvalue(a)) {
        printf("%d la so hoan hao.\n", a);
    } else {
        printf("%d khong phai la so hoan hao.\n", a);
    }
    if (checkperfectvalue(b)) {
        printf("%d la so hoan hao.\n", b);
    } else {
        printf("%d khong phai la so hoan hao.\n", b);
    }

    return 0;
}

