#include <iostream>
#include <cmath>

const double PI = 3.14159;

double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

double calculateTrianglePerimeter(double side1, double side2, double side3) {
    return side1 + side2 + side3;
}

double calculateSquareArea(double side) {
    return side * side;
}

double calculateSquarePerimeter(double side) {
    return 4 * side;
}

double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateRectanglePerimeter(double length, double width) {
    return 2 * (length + width);
}

double calculateCircleArea(double radius) {
    return PI * radius * radius;
}

double calculateCirclePerimeter(double radius) {
    return 2 * PI * radius;
}

int main() {
    int choice;
    std::cout << "Chon hinh can tinh:\n";
    std::cout << "1. Tam giac\n";
    std::cout << "2. Hinh vuong\n";
    std::cout << "3. Hinh chu nhat\n";
    std::cout << "4. Hinh tron\n";
    std::cout << "Nhap lua chon cua ban: ";
    std::cin >> choice;

    double result = 0.0;

    if (choice == 1) {
        double base, height;
        std::cout << "Nhap do dai day: ";
        std::cin >> base;
        std::cout << "Nhap chieu cao: ";
        std::cin >> height;
        result = calculateTriangleArea(base, height);
        std::cout << "Dien tich tam giac la: " << result << std::endl;
        std::cout << "Chu vi tam giac khong duoc tinh trong vi du nay.\n";
    } else if (choice == 2) {
        double side;
        std::cout << "Nhap do dai canh: ";
        std::cin >> side;
        result = calculateSquareArea(side);
        std::cout << "Dien tich hinh vuong la: " << result << std::endl;
        result = calculateSquarePerimeter(side);
        std::cout << "Chu vi hinh vuong la: " << result << std::endl;
    } else if (choice == 3) {
        double length, width;
        std::cout << "Nhap do dai: ";
        std::cin >> length;
        std::cout << "Nhap chieu rong: ";
        std::cin >> width;
        result = calculateRectangleArea(length, width);
        std::cout << "Dien tich hinh chu nhat la: " << result << std::endl;
        result = calculateRectanglePerimeter(length, width);
        std::cout << "Chu vi hinh chu nhat la: " << result << std::endl;
    } else if (choice == 4) {
        double radius;
        std::cout << "Nhap ban kinh: ";
        std::cin >> radius;
        result = calculateCircleArea(radius);
        std::cout << "Dien tich hinh tron la: " << result << std::endl;
        result = calculateCirclePerimeter(radius);
        std::cout << "Chu vi hinh tron la: " << result << std::endl;
    } else {
        std::cout << "Lua chon khong hop le.\n";
    }

    return 0;
}
