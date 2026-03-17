#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "Russian");
    int a = 0;
    int i = 1;
    while (i <= 1000) {
        if (i % 7 == 0) {
            a = a + i;
            cout << i << endl;

        }
        i = i + 4;
    }
    cout << a << " Сумма всех найденных чисел";
    return 0;
}

