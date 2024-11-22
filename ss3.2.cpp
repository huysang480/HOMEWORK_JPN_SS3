#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Yêu c?u ngu?i dùng nh?p nhi?t d? Celsius
    printf("Vui lòng nh?p nhi?t d? (°C): ");
    scanf("%f", &celsius);

    // Chuy?n d?i t? Celsius sang Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Hi?n th? k?t qu?
    printf("%.2f°C tuong duong v?i %.2f°F\n", celsius, fahrenheit);

    return 0;
}

