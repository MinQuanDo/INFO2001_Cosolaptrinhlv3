#include <iostream>
using namespace std;
int main(){
////Chuong tr�nh b?n cung c?p du?c vi?t b?ng ng�n ng? l?p tr�nh gi?ng C. H�y di qua t?ng bu?c m?t:
//
//1. `int a = 7, b = 8;`: D�ng n�y khai b�o hai bi?n nguy�n `a` v� `b`, v� kh?i t?o gi� tr? c?a ch�ng l� 7 v� 8.
//
//2. `a++;`: To�n t? `++` tang gi� tr? c?a `a` l�n 1. Sau d�ng n�y, `a` tr? th�nh 8.
//
//3. `a = a + (b--);`: D�ng n�y c?ng gi� tr? hi?n t?i c?a `a` v?i gi� tr? hi?n t?i c?a `b`, v� g�n k?t qu? tr? l?i cho `a`. To�n t? `--` gi?m gi� tr? c?a `b` di 1 sau khi th?c hi?n ph�p t�nh. V� v?y, `a` tr? th�nh 8 + 8 = 16, v� `b` tr? th�nh 7.
//
//4. `--b;`: To�n t? `--` gi?m gi� tr? c?a `b` di 1. Sau d�ng n�y, `b` tr? th�nh 6.
//
//5. `a--;`: To�n t? `--` gi?m gi� tr? c?a `a` di 1. Sau d�ng n�y, `a` tr? th�nh 15.
//
//6. `a = (--a) + (--b);`: D�ng n�y tru?c ti�n gi?m gi� tr? c?a `a` di 1 v� sau d� gi?m gi� tr? c?a `b` di 1. C�c gi� tr? d� gi?m du?c c?ng l?i v� g�n tr? l?i cho `a`. V� v?y, `a` tr? th�nh 14 + 5 = 19.
//
//7. `if (a % 2 != 0)`: D�ng n�y ki?m tra xem ph?n du c?a `a` khi chia cho 2 c� kh�c 0 kh�ng, di?u n�y cho bi?t `a` l� s? l?.
//
//8. `printf("\n a la so le");`: N?u di?u ki?n ? d�ng tru?c d�ng (t?c l� `a` l� s? l?), d�ng n�y s? in ra "a l� s? l?" k�m theo m?t k� t? xu?ng d�ng.
//
//9. `else`: N?u di?u ki?n ? bu?c 7 sai (t?c l� `a` l� s? ch?n), chuong tr�nh ti?p t?c t?i d�ng n�y.
//
//10. `printf("\n a la so chan");`: D�ng n�y in ra "a l� s? ch?n" k�m theo m?t k� t? xu?ng d�ng.
//
//11. `printf("\na = %d", a);`: D�ng n�y in ra gi� tr? c?a `a` k�m theo chu?i k� t? tru?c d�. Trong tru?ng h?p n�y, n� s? in ra "a = 19" k�m theo m?t k� t? xu?ng d�ng.
//
//V� v?y, k?t qu? cu?i c�ng c?a chuong tr�nh s? l�:
//```
//a l� s? l?
//a = 19
//```
//Bai 3
//Chuong tr�nh b?n cung c?p cung du?c vi?t b?ng ng�n ng? l?p tr�nh gi?ng C. H�y di qua t?ng bu?c m?t:
//
//1. `int x = 5, y;`: D�ng n�y khai b�o bi?n nguy�n `x` v� `y`, v� kh?i t?o gi� tr? c?a `x` l� 5.
//
//2. `y = x++ + 5;`: D�ng n�y g�n gi� tr? c?a `x` c?ng v?i 5 v�o `y`, sau d� tang gi� tr? c?a `x` l�n 1. V� `x` ban d?u l� 5, n�n `y` tr? th�nh 5 + 5 = 10 v� `x` tr? th�nh 6.
//
//3. `printf("x=%d, y=%d\n", x, y);`: D�ng n�y in ra gi� tr? c?a `x` v� `y` theo d?nh d?ng d� cho. Trong tru?ng h?p n�y, n� s? in ra "x=6, y=10" k�m theo m?t k� t? xu?ng d�ng.
//
//4. `y *= 6;`: D�ng n�y nh�n gi� tr? c?a `y` v?i 6 v� g�n k?t qu? tr? l?i cho `y`. V� `y` ban d?u l� 10, n�n `y` tr? th�nh 10 * 6 = 60.
//
//5. `x = y % 7;`: D�ng n�y l?y ph?n du c?a `y` chia cho 7 v� g�n k?t qu? tr? l?i cho `x`. V� `y` l� 60, n�n `x` tr? th�nh 60 % 7 = 4.
//
//6. `printf("x=%d, y=%d, y/x=%d", x, y, y/x);`: D�ng n�y in ra gi� tr? c?a `x`, `y`, v� ph�p chia nguy�n `y/x` theo d?nh d?ng d� cho. Trong tru?ng h?p n�y, n� s? in ra "x=4, y=60, y/x=15".
//
//V� v?y, k?t qu? cu?i c�ng c?a chuong tr�nh s? l�:
//```
//x=6, y=10
//x=4, y=60, y/x=15
```
	return 0;
}
