#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    setlocale(0, "Russian");
    ifstream f("output.txt");
    int x;
    int i = 1;
    while (f >> x) {
        cout << i << ". " << x << endl;
        i++;
    }
    f.close();
    return 0;
}
