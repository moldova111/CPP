#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	int A, B;
	cin >> A;
	cin >> B;
	while (A > B) {
		cout << "Ошибка, B должно быть больше A, Введите B заново";
		cin >> B;
	}
	ofstream f("output.txt");
	
	for (int i = A; i <= B; i++) {
		f << i * 3 << endl;
	}
	f.close();
	return 0;
}

