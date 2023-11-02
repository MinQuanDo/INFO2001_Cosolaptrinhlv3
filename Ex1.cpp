#include <iostream>
using namespace std;
int main(){
////Chuong trình b?n cung c?p du?c vi?t b?ng ngôn ng? l?p trình gi?ng C. Hãy di qua t?ng bu?c m?t:
//
//1. `int a = 7, b = 8;`: Dòng này khai báo hai bi?n nguyên `a` và `b`, và kh?i t?o giá tr? c?a chúng là 7 và 8.
//
//2. `a++;`: Toán t? `++` tang giá tr? c?a `a` lên 1. Sau dòng này, `a` tr? thành 8.
//
//3. `a = a + (b--);`: Dòng này c?ng giá tr? hi?n t?i c?a `a` v?i giá tr? hi?n t?i c?a `b`, và gán k?t qu? tr? l?i cho `a`. Toán t? `--` gi?m giá tr? c?a `b` di 1 sau khi th?c hi?n phép tính. Vì v?y, `a` tr? thành 8 + 8 = 16, và `b` tr? thành 7.
//
//4. `--b;`: Toán t? `--` gi?m giá tr? c?a `b` di 1. Sau dòng này, `b` tr? thành 6.
//
//5. `a--;`: Toán t? `--` gi?m giá tr? c?a `a` di 1. Sau dòng này, `a` tr? thành 15.
//
//6. `a = (--a) + (--b);`: Dòng này tru?c tiên gi?m giá tr? c?a `a` di 1 và sau dó gi?m giá tr? c?a `b` di 1. Các giá tr? dã gi?m du?c c?ng l?i và gán tr? l?i cho `a`. Vì v?y, `a` tr? thành 14 + 5 = 19.
//
//7. `if (a % 2 != 0)`: Dòng này ki?m tra xem ph?n du c?a `a` khi chia cho 2 có khác 0 không, di?u này cho bi?t `a` là s? l?.
//
//8. `printf("\n a la so le");`: N?u di?u ki?n ? dòng tru?c dúng (t?c là `a` là s? l?), dòng này s? in ra "a là s? l?" kèm theo m?t ký t? xu?ng dòng.
//
//9. `else`: N?u di?u ki?n ? bu?c 7 sai (t?c là `a` là s? ch?n), chuong trình ti?p t?c t?i dòng này.
//
//10. `printf("\n a la so chan");`: Dòng này in ra "a là s? ch?n" kèm theo m?t ký t? xu?ng dòng.
//
//11. `printf("\na = %d", a);`: Dòng này in ra giá tr? c?a `a` kèm theo chu?i ký t? tru?c dó. Trong tru?ng h?p này, nó s? in ra "a = 19" kèm theo m?t ký t? xu?ng dòng.
//
//Vì v?y, k?t qu? cu?i cùng c?a chuong trình s? là:
//```
//a là s? l?
//a = 19
//```
//Bai 3
//Chuong trình b?n cung c?p cung du?c vi?t b?ng ngôn ng? l?p trình gi?ng C. Hãy di qua t?ng bu?c m?t:
//
//1. `int x = 5, y;`: Dòng này khai báo bi?n nguyên `x` và `y`, và kh?i t?o giá tr? c?a `x` là 5.
//
//2. `y = x++ + 5;`: Dòng này gán giá tr? c?a `x` c?ng v?i 5 vào `y`, sau dó tang giá tr? c?a `x` lên 1. Vì `x` ban d?u là 5, nên `y` tr? thành 5 + 5 = 10 và `x` tr? thành 6.
//
//3. `printf("x=%d, y=%d\n", x, y);`: Dòng này in ra giá tr? c?a `x` và `y` theo d?nh d?ng dã cho. Trong tru?ng h?p này, nó s? in ra "x=6, y=10" kèm theo m?t ký t? xu?ng dòng.
//
//4. `y *= 6;`: Dòng này nhân giá tr? c?a `y` v?i 6 và gán k?t qu? tr? l?i cho `y`. Vì `y` ban d?u là 10, nên `y` tr? thành 10 * 6 = 60.
//
//5. `x = y % 7;`: Dòng này l?y ph?n du c?a `y` chia cho 7 và gán k?t qu? tr? l?i cho `x`. Vì `y` là 60, nên `x` tr? thành 60 % 7 = 4.
//
//6. `printf("x=%d, y=%d, y/x=%d", x, y, y/x);`: Dòng này in ra giá tr? c?a `x`, `y`, và phép chia nguyên `y/x` theo d?nh d?ng dã cho. Trong tru?ng h?p này, nó s? in ra "x=4, y=60, y/x=15".
//
//Vì v?y, k?t qu? cu?i cùng c?a chuong trình s? là:
//```
//x=6, y=10
//x=4, y=60, y/x=15
```
	return 0;
}
