#include <iostream>
#include <string>
using namespace std;

int main() {
	string sandwiches[4] = { "이탈리안 비엣", "스파이시 이탈리안", "로스트 비프", "터키 & 햄" };
	int calories[4] = { 500, 600, 550, 450 };
	int prices[4] = { 5000, 6000, 5500, 4500 };

	cout << "서브웨이 샌드위치 메뉴" << endl;
	for (int i = 0; i < 4; i++) {
		cout << "[" << (i + 1) << "] " << sandwiches[i] << " - 칼로리: " 
			<< calories[i] << "kcal / 가격: " << prices[i] << "원\n";
	}
	return 0;
}