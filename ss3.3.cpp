#include <stdio.h>

int main() {
    float r, chu_vi, dien_tich;
    const float pi = 3.14159; // Khai báo h?ng s? PI

    // Yêu c?u ngý?i dùng nh?p bán kính
    printf("Vui l?ng nh?p bán kính h?nh tr?n (r): ");
    scanf("%f", &r);

    // Tính chu vi và di?n tích
    chu_vi = 2 * pi * r;
    dien_tich = pi * r * r;

    // In k?t qu? v?i 2 ch? s? th?p phân
    printf("Chu vi h?nh tr?n: %.2f\n", chu_vi);
    printf("Di?n tích h?nh tr?n: %.2f\n", dien_tich);

    return 0;
}

