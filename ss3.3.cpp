#include <stdio.h>

int main() {
    float r, chu_vi, dien_tich;
    const float pi = 3.14159; // Khai b�o h?ng s? PI

    // Y�u c?u ng�?i d�ng nh?p b�n k�nh
    printf("Vui l?ng nh?p b�n k�nh h?nh tr?n (r): ");
    scanf("%f", &r);

    // T�nh chu vi v� di?n t�ch
    chu_vi = 2 * pi * r;
    dien_tich = pi * r * r;

    // In k?t qu? v?i 2 ch? s? th?p ph�n
    printf("Chu vi h?nh tr?n: %.2f\n", chu_vi);
    printf("Di?n t�ch h?nh tr?n: %.2f\n", dien_tich);

    return 0;
}

