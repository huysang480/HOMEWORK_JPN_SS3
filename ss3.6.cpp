#include <stdio.h>

int main() {
    float canh_day, chieu_cao, dien_tich;

    // Y�u c?u ng�?i d�ng nh?p v�o c?nh ��y
    printf("Vui l?ng nh?p �? d�i c?nh ��y c?a tam gi�c: ");
    scanf("%f", &canh_day);

    // Y�u c?u ng�?i d�ng nh?p v�o chi?u cao
    printf("Vui l?ng nh?p chi?u cao c?a tam gi�c: ");
    scanf("%f", &chieu_cao);

    // T�nh di?n t�ch tam gi�c
    dien_tich = (canh_day * chieu_cao) / 2;

    // Hi?n th? k?t qu? v?i 2 ch? s? th?p ph�n
    printf("Di?n t�ch tam gi�c l�: %.2f\n", dien_tich);

    return 0;
}

