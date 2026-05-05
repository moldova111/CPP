#include <iostream>

using namespace std;
double squared_sum(double number1, double number2) {
    double sum = number1 + number2;
    return sum * sum;
}

int main()
{
    cout << squared_sum(12, 6) << "\n"; // 324
    cout << squared_sum(12, -6) << "\n"; // 36
    return 0;
}