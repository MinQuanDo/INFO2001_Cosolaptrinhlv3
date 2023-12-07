 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Book {
    char nameBook[50];
    char name[30];
    int cost;
} book;


void Input(book **ptr, int *n) {
    printf("\nBan muon nhap thong tin cua may sach\n");
    scanf("%d", n);
    getchar();
    *ptr = (book*)malloc(*n * sizeof(book));

    if (*ptr == NULL) {
        printf("Khong du bo nho de luu tru!");
        exit(1);
    }

    for (int i = 0; i < *n; i++) {
        printf("Nhap thong tin cua sach thu %d\n", i + 1);
        printf("nNhap ten sach:\n");
        fgets((*ptr + i)->nameBook, 50, stdin);
        printf("Nhap ten tac gia: \n");
        fgets((*ptr)[i].name, 30, stdin);
        printf("Nhap gia tien:\n");
        scanf("%d", &(*ptr)[i].cost);
        getchar();
    }
}


void Output(book *ptr, int n) {
    for (int i = 0; i < n; i++) {
        printf("Thong tin cua sach thu %d là:\n", i + 1);
        printf("Ten sach: %s\n", ptr[i].nameBook);
        printf("Ten tac gia: %s\n", ptr[i].name);
        printf("Gia cua sach: %d\n", (ptr+i)->cost);
        printf("\n");
    }
}


void Edit(book *ptr, int n) {
    int j;
    printf("Ban chon chinh sua thong tin cua sach\n");
    printf("Ban muon chinh sua thong tin cua sach thu may\n");
    scanf("%d", &j);
    getchar();
    printf("Nhap thong tin cua sach thu %d\n", j);
    printf("Nhap ten sach:\n");
    fgets((ptr + j - 1)->nameBook, 50, stdin);
    printf("Nhap ten tac gia: \n");
    fgets(ptr[j - 1].name, 30, stdin);
    printf("Nhap gia tien:\n");
    scanf("%d", &ptr[j - 1].cost);
}


void deletes(book **ptr, int *n) {
    printf("Ban chon xoa thong tin cua sach\nban muon xoa thong tin sach thu may\n");
    int c;
    scanf("%d", &c);
    getchar();
    for (int i = c - 1; i < *n - 1; i++) {
        memcpy(&(*ptr)[i], &(*ptr)[i + 1], sizeof(book));
    }
    *n = *n - 1;
}


int main() {
    book *ptr;
    int n = 0, a;
    do {
        printf("Chuong trinh luu tru thong tin sach\nMoi ban chon\n1. Nhap thong tin sach\n2.them thong tin sach\n3. chinh sua thong tin sach\n4. xoa sach\n5. Hien thi danh sach thong tin cac sach\n0. Thoat chuong trinh\n");
        scanf("%d", &a);

        switch (a) {
            case 1:
                Input(&ptr, &n);
                printf("Them thong tin thanh cong!\n");
                break;
            case 2:
                printf("Ban chon them mot quyen sach moi\n");
                ptr = (book*)realloc(ptr, (n + 1) * sizeof(book));
                printf("Nhap ten sach:\n");
                getchar();
                fgets(ptr[n].nameBook, 50, stdin);
                printf("Nhap ten tac gia:\n");
                fgets(ptr[n].name, 30, stdin);
                printf("Nhap gia tien cua sach : \n");
                scanf("%d", &ptr[n].cost);
                n++; // Tang s? lu?ng sách lên 1
                break;
            case 3:
                if (n > 0)
                    Edit(ptr, n);
                else
                    printf("Khong co thong tin sach nao de chinh sua\n");
                break;
            case 4:
                if (n > 0)
                    deletes(&ptr, &n);
                else {
                    printf("Khong co du lieu de xoa");
                    break;
                }
                break;
            case 5:
                Output(ptr, n);
                break;
        }
    } while (a != 0);

    free(ptr);

    return 0;
}
