#include <iostream>
#include <string>
using namespace std;
int main() {
	// 메뉴 항목 이름
	string items[3] = { "빅맥", "감자튀김", "콜라" };
	// 각 테이블의 세트 구성 (단위: g 또는 ml)
	int setMenu[3][3] = {
	{150, 120, 250}, // 테이블 1
	{160, 130, 300}, // 테이블 2
	{170, 140, 280} // 테이블 3
	};
	// 테이블별 메뉴 출력
	for (int table = 0; table < 3; table++) {
		cout << " 테이블 " << (table + 1) << "의 세트메뉴:" << endl;
		for (int item = 0; item < 3; item++) {
			cout << " - " << items[item] << ": " <<
				setMenu[table][item];
			cout << ((item == 2) ? "ml" : "g") << endl;
		}
		cout << endl;
	}
	return 0;
}