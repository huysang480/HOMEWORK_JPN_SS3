#include <stdio.h>

int main() {
    float diem_toan, diem_van, diem_anh;
    float tong_diem, diem_trung_binh;

    // Y�u c?u ng�?i d�ng nh?p �i?m 3 m�n
    printf("Nh?p �i?m To�n: ");
    scanf("%f", &diem_toan);

    printf("Nh?p �i?m V�n: ");
    scanf("%f", &diem_van);

    printf("Nh?p �i?m Anh: ");
    scanf("%f", &diem_anh);

    // T�nh t?ng �i?m v� �i?m trung b?nh
    tong_diem = diem_toan + diem_van + diem_anh;
    diem_trung_binh = tong_diem / 3;

    // In k?t qu? v?i 2 ch? s? th?p ph�n
    printf("T?ng �i?m: %.2f\n", tong_diem);
    printf("�i?m trung b?nh: %.2f\n", diem_trung_binh);

    return 0;
}

