#include <iostream>

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(int day, int month, int year) {
    // Ki?m tra tính h?p l? c?a ngày, tháng, nam
    // Code ki?m tra tính h?p l? c?a ngày, tháng, nam ? dây
}

int main() {
    int day, month, year;

    std::cout << "Nhap ngay: ";
    std::cin >> day;
    std::cout << "Nhap thang: ";
    std::cin >> month;
    std::cout << "Nhap nam: ";
    std::cin >> year;

    if (isValidDate(day, month, year)) {
        if (isLeapYear(year)) {
            std::cout << "Nam " << year << " la nam nhuan.\n";
        } else {
            std::cout << "Nam " << year << " khong phai la nam nhuan.\n";
        }
    } else {
        std::cout << "Ngay " << day << "/" << month << "/" << year << " khong hop le.\n";
    }

    return 0;
}
