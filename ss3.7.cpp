#include <stdio.h>

int main() {
    int so, tong = 0;

    // Y�u c?u ng�?i d�ng nh?p m?t s? nguy�n c� 4 ch? s?
    printf("Vui l?ng nh?p m?t s? nguy�n c� 4 ch? s?: ");
    scanf("%d", &so);

    // Ki?m tra s? c� ��ng 4 ch? s? kh�ng
    if (so < 1000 || so > 9999) {
        printf("S? b?n nh?p kh�ng ph?i l� s? c� 4 ch? s?.\n");
        return 1; // Tho�t ch��ng tr?nh
    }

    // T�nh t?ng c�c ch? s?
    while (so > 0) {
        tong += so % 10; // L?y ch? s? cu?i v� c?ng v�o t?ng
        so /= 10;        // B? ch? s? cu?i
    }

    // Hi?n th? k?t qu?
    printf("T?ng c�c ch? s? l�: %d\n", tong);

    return 0;
}

