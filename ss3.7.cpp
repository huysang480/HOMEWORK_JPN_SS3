#include <stdio.h>

int main() {
    int so, tong = 0;

    // Yêu c?u ngý?i dùng nh?p m?t s? nguyên có 4 ch? s?
    printf("Vui l?ng nh?p m?t s? nguyên có 4 ch? s?: ");
    scanf("%d", &so);

    // Ki?m tra s? có ðúng 4 ch? s? không
    if (so < 1000 || so > 9999) {
        printf("S? b?n nh?p không ph?i là s? có 4 ch? s?.\n");
        return 1; // Thoát chýõng tr?nh
    }

    // Tính t?ng các ch? s?
    while (so > 0) {
        tong += so % 10; // L?y ch? s? cu?i và c?ng vào t?ng
        so /= 10;        // B? ch? s? cu?i
    }

    // Hi?n th? k?t qu?
    printf("T?ng các ch? s? là: %d\n", tong);

    return 0;
}

