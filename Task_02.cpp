#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(0, "Russian");
    int x, y;
    cin >> x;
    cin >> y;
    int z = x / y;
    int v = x % y;
    cout << z << " Результат деления нацело" << endl;
    cout << v << " Остаток";
    return 0;
}

