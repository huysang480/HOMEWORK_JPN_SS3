#include <stdio.h>

int main() {
    float diem_toan, diem_van, diem_anh;
    float tong_diem, diem_trung_binh;

    // Yêu c?u ngý?i dùng nh?p ði?m 3 môn
    printf("Nh?p ði?m Toán: ");
    scanf("%f", &diem_toan);

    printf("Nh?p ði?m Vãn: ");
    scanf("%f", &diem_van);

    printf("Nh?p ði?m Anh: ");
    scanf("%f", &diem_anh);

    // Tính t?ng ði?m và ði?m trung b?nh
    tong_diem = diem_toan + diem_van + diem_anh;
    diem_trung_binh = tong_diem / 3;

    // In k?t qu? v?i 2 ch? s? th?p phân
    printf("T?ng ði?m: %.2f\n", tong_diem);
    printf("Ði?m trung b?nh: %.2f\n", diem_trung_binh);

    return 0;
}

