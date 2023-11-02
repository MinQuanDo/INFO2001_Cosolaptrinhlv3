#include <iostream>

bool isValidTime(int hour, int minute, int second) {
    if (hour < 0 || hour > 23 || minute < 0 || minute > 59 || second < 0 || second > 59) {
        return false;
    }
    return true;
}

int main() {
    int hour, minute, second;

    std::cout << "Nhap gio: ";
    std::cin >> hour;
    std::cout << "Nhap phut: ";
    std::cin >> minute;
    std::cout << "Nhap giay: ";
    std::cin >> second;

    if (isValidTime(hour, minute, second)) {
        std::cout << "Thoi gian " << hour << ":" << minute << ":" << second << " hop le.\n";
    } else {
        std::cout << "Thoi gian " << hour << ":" << minute << ":" << second << " khong hop le.\n";
    }

    return 0;
}
