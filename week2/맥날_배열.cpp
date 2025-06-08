#include <iostream>
#include <string>
using namespace std;

int main() {
	string items[3] = {"빅맥", "감자튀김", "콜라"};
	int setMenu[3][3] = {
		{150, 120, 250},
		{160, 130, 300},
		{170, 140, 280}
	};

	for (int table = 0; table < 3; table++) {
		cout << "Table " << (table + 1) << "의 세트메뉴" << endl;
		for (int i = 0; i < 3; i++) {
			cout << " - " << items[i] << ": " << setMenu[table][i];
			cout << ((i == 2) ? "ml" : "g") << endl;
		}
		cout << endl;
	}
	return 0;
}