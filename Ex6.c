#include <stdio.h>

int main() {
    int a, b, c;
    int min, mid;
    
    printf("Nhap vao ba so nguyen a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    min = a;
    mid = b;
    
    if (min > mid) {
        int temp = min;
        min = mid;
        mid = temp;
    }
    
    if (mid > c) {
        int temp = mid;
        mid = c;
        c = temp;
        
        if (min > mid) {
            int temp = min;
            min = mid;
            mid = temp;
        }
    }
    
    printf("Cac so theo thu tu tang dan: %d, %d, %d\n", min, mid, c);
    
    return 0;
}


