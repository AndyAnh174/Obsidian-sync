#include <iostream>
#include <string>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    Date birthday;

    // Nhập ngày tháng năm sinh
    cout << "Nhap ngay/thang/nam sinh (dd/mm/yyyy): ";
    char slash;
    cin >> birthday.day >> slash >> birthday.month >> slash >> birthday.year;

    // Hiển thị ngày tháng năm sinh
    cout << "Ngay thang nam sinh: " << birthday.day << "/" << birthday.month << "/" << birthday.year << endl;

    return 0;
}
