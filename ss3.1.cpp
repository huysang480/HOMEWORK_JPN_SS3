#include <stdio.h>

int main() {
    char ten[50]; // Khai b�o m?t m?ng k� t? d? luu t�n

    printf("Vui l�ng nh?p t�n c?a b?n: ");
    fgets(ten, sizeof(ten), stdin); // �?c t�n t? b�n ph�m, k? c? kho?ng tr?ng

    // Lo?i b? k� t? xu?ng d�ng (\n) n?u c�
    if (ten[strlen(ten) - 1] == '\n') {
        ten[strlen(ten) - 1] = '\0';
    }

    printf("Xin ch�o %s!\n", ten); // In ra loi chao
    return 0;
}

