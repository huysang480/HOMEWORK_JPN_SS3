#include <stdio.h>

int main() {
    char ten[50]; // Khai báo m?t m?ng ký t? d? luu tên

    printf("Vui lòng nh?p tên c?a b?n: ");
    fgets(ten, sizeof(ten), stdin); // Ð?c tên t? bàn phím, k? c? kho?ng tr?ng

    // Lo?i b? ký t? xu?ng dòng (\n) n?u có
    if (ten[strlen(ten) - 1] == '\n') {
        ten[strlen(ten) - 1] = '\0';
    }

    printf("Xin chào %s!\n", ten); // In ra loi chao
    return 0;
}

