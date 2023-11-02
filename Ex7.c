#include <stdio.h>

int main() {
    int n;
    
    printf("Nhap vao mot so nguyen n gom ba chu so: ");
    scanf("%d", &n);
    
    int hangTram = n / 100;         // L?y ch? s? h�ng tram
    int hangChuc = (n % 100) / 10;  // L?y ch? s? h�ng ch?c
    int hangDonVi = n % 10;         // L?y ch? s? h�ng don v?
    
    int chuSoLonNhat;
    int viTriChuSoLonNhat;
    
    if (hangTram >= hangChuc && hangTram >= hangDonVi) {
        chuSoLonNhat = hangTram;
        viTriChuSoLonNhat = 0;  // V? tr� ch? s? l?n nh?t l� h�ng tram
    } else if (hangChuc >= hangTram && hangChuc >= hangDonVi) {
        chuSoLonNhat = hangChuc;
        viTriChuSoLonNhat = 1;  // V? tr� ch? s? l?n nh?t l� h�ng ch?c
    } else {
        chuSoLonNhat = hangDonVi;
        viTriChuSoLonNhat = 2;  // V? tr� ch? s? l?n nh?t l� h�ng don v?
    }
    
    printf("Chu so lon nhat la: %d, nam o vi tri: %d\n", chuSoLonNhat, viTriChuSoLonNhat);
    
    return 0;
}
