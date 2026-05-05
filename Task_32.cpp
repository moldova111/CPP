#include <iostream>

#include <cstring>
using namespace std;

int main() {
    setlocale(0, "Russian");
    char str[100];
    cout << "Введите строку: ";

    cin.getline(str, 100);

    char* ptr = str;

    for (int i = 0; i < strlen(str); i++) {
        *(ptr + i) += 1;
    }

    cout << "Результат: " << str << endl;
    return 0;
}