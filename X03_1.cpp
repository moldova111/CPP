#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Item {
public: 
    string name;
    int prise;

    Item(string n, int p) {
        name = n;
        prise = p;
    }
    int bonus(int n) {
        return prise * n / 100;
    }
};

int main()
{
    vector<Item> items;
    items.push_back(Item("yabloki", 200));
    items.push_back(Item("malako", 120));
    items.push_back(Item("konfeta", 300));
    items.push_back(Item("masleco", 500));
    items.push_back(Item("oreshnik", 1000));
    items.push_back(Item("kolbasik", 350));
    items.push_back(Item("gorchicha", 45));
    items.push_back(Item("hlep", 50));
    items.push_back(Item("chai", 100));
    items.push_back(Item("tort", 650));

    vector<Item> chicha = items;
    for (int i = 0; i < chicha.size() - 1; i++) {
        for (int j = i + 1; j < chicha.size(); j++) {
            if (chicha[i].prise < chicha[j].prise) {
                swap(chicha[i], chicha[j]);

            }
        }
    }
    cout << "Sposob 1 " << endl;
    int bonus_1 = 0;
    int bonus_2 = 0;
    for (int i = 0; i < chicha.size(); i++) {
        if (bonus_1 >= chicha[i].prise) {
            cout << chicha[i].name << " Oplacheno bonusami " << chicha[i].prise << endl;
            bonus_1 = bonus_1 - chicha[i].prise;
            bonus_2 = bonus_2 + chicha[i].prise; 
        }
        else {
            int bonus_3 = chicha[i].bonus(3);
            cout << chicha[i].name << " Oplacheno dengami " << chicha[i].prise << endl;
            bonus_1 = bonus_1 + bonus_3;

        }
    } 
    cout << "Oplacheno bonusami vsego " << bonus_2 << endl;
    cout << "Ostalos bonusov " << bonus_1 << endl;
    cout << "Sposob 2 " << endl;
    bonus_1 = 0;
    bonus_2 = 0;
    for (int i = 0; i < chicha.size(); i++) {
        int bonus_3 = chicha[i].bonus(3);
        cout << chicha[i].name << " Kupleno za dengi " << chicha[i].prise << " Nachisleno bonusov " << bonus_3 << endl;
        bonus_1 = bonus_1 + bonus_3;

    }
    for (int i = 0; i < chicha.size(); i++) {
        if (bonus_1 >= chicha[i].prise) {
            cout << chicha[i].name << " Mojno oplatit bonusami " << chicha[i].prise << endl;
            bonus_1 = bonus_1 - chicha[i].prise;
            bonus_2 = bonus_2 + chicha[i].prise;
        }
    }
    cout << "Oplacheno bonusami vsego " << bonus_2 << endl;
    cout << "Ostalos bonusov " << bonus_1 << endl;
}


