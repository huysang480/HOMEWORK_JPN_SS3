#include <stdio.h>

int main() {
    // M?ng ch?a thông tin sinh viên
    const char *ho_va_ten[] = {
        "Nguyen Van A", "Nguyen Van B", "Nguyen Van C", "Nguyen Van D", 
        "Nguyen Van E", "Nguyen Van F", "Nguyen Van G", "Nguyen Van H", 
        "Nguyen Van I", "Nguyen Van K"
    };
    const int tuoi[] = {20, 21, 18, 19, 22, 21, 23, 19, 18, 21};
    const char *so_dien_thoai = "090448848";
    const char *email_domain = "@rikkeiacademy.com";

    // In tiêu ð?
    printf("--------------------------------------------------------------------\n");
    printf("| %-3s | %-20s | %-4s | %-10s | %-25s |\n", "STT", "Ho va ten", "Tuoi", "So dien thoai", "email");
    printf("--------------------------------------------------------------------\n");

    // In thông tin sinh viên
    for (int i = 0; i < 10; i++) {
        printf("| %-3d | %-20s | %-4d | %s%d | %c%c%c@rikkeiacademy.com |\n", 
            i + 1, ho_va_ten[i], tuoi[i], so_dien_thoai, i + 1, 
            'a' + i, 'n', 'v'); // T?o email d?ng `anv`, `bnv`, ...
    }

    // K?t thúc b?ng
    printf("--------------------------------------------------------------------\n");

    return 0;
}

