#include <stdio.h>

int main() {
    float canh_day, chieu_cao, dien_tich;

    // Yêu c?u ngý?i dùng nh?p vào c?nh ðáy
    printf("Vui l?ng nh?p ð? dài c?nh ðáy c?a tam giác: ");
    scanf("%f", &canh_day);

    // Yêu c?u ngý?i dùng nh?p vào chi?u cao
    printf("Vui l?ng nh?p chi?u cao c?a tam giác: ");
    scanf("%f", &chieu_cao);

    // Tính di?n tích tam giác
    dien_tich = (canh_day * chieu_cao) / 2;

    // Hi?n th? k?t qu? v?i 2 ch? s? th?p phân
    printf("Di?n tích tam giác là: %.2f\n", dien_tich);

    return 0;
}

