#include <stdio.h>

int main() {
    int a, b;
    
    printf("Nhap vao hai so nguyen a, b: ");
    scanf("%d %d", &a, &b);
    
    if (a > b) {
        printf("Gia tri lon nhat la: %d\n", a);
    } else {
        printf("Gia tri lon nhat la: %d\n", b);
    }
    
    return 0;
}
