#include <iostream>

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(int day, int month, int year) {
    if (year < 1 || month < 1 || month > 12 || day < 1) {
        return false;
    }

    int daysInMonth;
    switch (month) {
        case 2:
            daysInMonth = isLeapYear(year) ? 29 : 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            daysInMonth = 30;
            break;
        default:
            daysInMonth = 31;
            break;
    }

    return day <= daysInMonth;
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
        std::cout << "Ngay " << day << "/" << month << "/" << year << " hop le.\n";
    } else {
        std::cout << "Ngay " << day << "/" << month << "/" << year << " khong hop le.\n";
    }

    return 0;
}
