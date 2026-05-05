#include <iostream>
#include <clocale>
using namespace std;
void sort(int st[10]) {
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9 - i; ++j) {
            if (st[j] < st[j + 1]) {
                swap(st[j], st[j + 1]);
            }
        }
    }
}
int main() {
    setlocale(0, "Russian");
    int a[10] = { 1, 8, 3, 6, 5, 4, 9, 2, 8, 12 };
    sort(a);
    cout << "Отсортированный массив: ";
    for (int i = 0; i < 10; ++i) cout << a[i] << " ";
    return 0;
}
