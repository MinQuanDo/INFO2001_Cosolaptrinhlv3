#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Nhap vao ba so nguyen a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    int max = a;  // Gi? s? a là giá tr? l?n nh?t ban d?u
    
    if (b > max) {
        max = b;
    }
    
    if (c > max) {
        max = c;
    }
    
    printf("Gia tri lon nhat la: %d\n", max);
    
    return 0;
}
