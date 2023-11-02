#include <stdio.h>

int main() {
    int n;
    
    printf("Nhap vao mot so nguyen n gom ba chu so: ");
    scanf("%d", &n);
    
    int hangTram = n / 100;         // L?y ch? s? h�ng tram
    int hangChuc = (n % 100) / 10;  // L?y ch? s? h�ng ch?c
    int hangDonVi = n % 10;         // L?y ch? s? h�ng don v?
    
    // S?p x?p c�c ch? s? theo th? t? tang d?n
    int temp;
    if (hangTram > hangChuc) {
        temp = hangTram;
        hangTram = hangChuc;
        hangChuc = temp;
    }
    if (hangChuc > hangDonVi) {
        temp = hangChuc;
        hangChuc = hangDonVi;
        hangDonVi = temp;
    }
    if (hangTram > hangChuc) {
        temp = hangTram;
        hangTram = hangChuc;
        hangChuc = temp;
    }
    
    printf("Cac chu so theo thu tu tang dan: %d%d%d\n", hangTram, hangChuc, hangDonVi);
    
    return 0;
}
