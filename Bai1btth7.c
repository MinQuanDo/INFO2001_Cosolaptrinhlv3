#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Ðinh nghia cau truc Sinh viên
struct Student {
    char name[50];
    char id[10];
    float score;
    struct Student* next;
};

// Con tro du danh sach lien ket
struct Student* head = NULL;

// Ham them sinh viên moi vào danh sach
void addStudent() {
  
    struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student));

    // Nhap thong tin sinh vien tu nguoi dung
    printf("Nhap ten sinh vien: ");
    scanf(" %[^\n]s", newStudent->name);
    printf("Nhap ma sinh vien: ");
    scanf(" %[^\n]s", newStudent->id);
    printf("Nhap diem sinh vien: ");
    scanf("%f", &(newStudent->score));

    // Them sinh vien vao du danh sách
    newStudent->next = head;
    head = newStudent;

    printf("Sinh vien da duoc them.\n");
}

// Hàm xoa sinh vien khi danh sach
void deleteStudent() {
    char id[10];
    printf("Nhap ma sinh vien can xoa: ");
    scanf(" %[^\n]s", id);

    struct Student* current = head;
    struct Student* previous = NULL;

    while (current != NULL) {
        if (strcmp(current->id, id) == 0) {
            if (previous == NULL) {
                head = current->next;
            } else {
                previous->next = current->next;
            }

            free(current);
            printf("Sinh vien da duoc xoa.\n");
            return;
        }

        previous = current;
        current = current->next;
    }

    printf("Khong tim thay sinh vien voi ma %s.\n", id);
}

// Ham cap nhat thong tin sinh vien
void updateStudent() {
    char id[10];
    printf("Nhap ma sinh vien can cap nhat: ");
    scanf(" %[^\n]s", id);

    struct Student* current = head;

    while (current != NULL) {
        if (strcmp(current->id, id) == 0) {
            printf("Nhap thong tin moi:\n");
            printf("Nhap ten sinh vien: ");
            scanf(" %[^\n]s", current->name);
            printf("Nhap diem sinh vien: ");
            scanf("%f", &(current->score));
            printf("Sinh vien da duoc cap nhat.\n");
            return;
        }

        current = current->next;
    }

    printf("Khong tim thay sinh vien voi ma %s.\n", id);
}

// Ham luu danh sach sinh vien vao file
void saveStudentsToFile() {
    char filename[50];
    printf("Nhap ten file de luu danh sach sinh vien: ");
    scanf(" %[^\n]s", filename);

    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        printf("Khong the mo file de ghi.\n");
        return;
    }

    struct Student* current = head;

    while (current != NULL) {
        fprintf(file, "%s,%s,%.2f\n", current->name, current->id, current->score);
        current = current->next;
    }

    fclose(file);
    printf("Danh sach sinh vien da duoc luu vao file.\n");
}

// Ham dc danh sach sinh viên tu file
void loadStudentsFromFile() {
    char filename[50];
    printf("Nhap ten file de doc danh sach sinh vien: ");
    scanf(" %[^\n]s", filename);

    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Khong the mo file de doc.\n");
        return;
    }

    char line[100];

    while (fgets(line, sizeof(line), file)) {
        struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student));

        char* token = strtok(line, ",");
        strcpy(newStudent->name, token);

        token = strtok(NULL, ",");
        strcpy(newStudent->id, token);

        token = strtok(NULL, ",");
        newStudent->score = atof(token);

        // Thêm sinh vien vao dau danh sach
        newStudent->next = head;
        head = newStudent;
    }

    fclose(file);
    printf("Danh sach sinh vien da duoc tai tu file.\n");
}

// Ham in menu chuong trinh
void printMenu() {
    printf("\n----- Quan ly sinh vien -----\n");
    printf("1. Them sinh vien\n");
    printf("2. Xoa sinh vien\n");
    printf("3. Cap nhat sinh vien\n");
    printf("4. Luu danh sach sinh vien vao file\n");
    printf("5. Tai danh sach sinh vien tu file\n");
    printf("6. Thoat\n");
    printf("----------------------------\n");
    printf("Chon mot lua chon (1-6): ");
}

int main() {
    int choice;

    while (1) {
        printMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                deleteStudent();
                break;
            case 3:
                updateStudent();
                break;
            case 4:
                saveStudentsToFile();
                break;
            case 5:
                loadStudentsFromFile();
                break;
            case 6:
                return 0;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    }

    return 0;
}

