#include <stdio.h>

int main() {
    int n;
    
    printf("Nhap vao mot so nguyen n gom ba chu so: ");
    scanf("%d", &n);
    
    int hangTram = n / 100;         // L?y ch? s? hàng tram
    int hangChuc = (n % 100) / 10;  // L?y ch? s? hàng ch?c
    int hangDonVi = n % 10;         // L?y ch? s? hàng don v?
    
    int chuSoLonNhat;
    int viTriChuSoLonNhat;
    
    if (hangTram >= hangChuc && hangTram >= hangDonVi) {
        chuSoLonNhat = hangTram;
        viTriChuSoLonNhat = 0;  // V? trí ch? s? l?n nh?t là hàng tram
    } else if (hangChuc >= hangTram && hangChuc >= hangDonVi) {
        chuSoLonNhat = hangChuc;
        viTriChuSoLonNhat = 1;  // V? trí ch? s? l?n nh?t là hàng ch?c
    } else {
        chuSoLonNhat = hangDonVi;
        viTriChuSoLonNhat = 2;  // V? trí ch? s? l?n nh?t là hàng don v?
    }
    
    printf("Chu so lon nhat la: %d, nam o vi tri: %d\n", chuSoLonNhat, viTriChuSoLonNhat);
    
    return 0;
}
