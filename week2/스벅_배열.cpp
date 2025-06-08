#include <iostream>
#include <string>
using namespace std;

int main() {
	string drinks[4] = { "아메리카노", "카페라떼", "카라멜마끼아또", "녹차라떼" };
	int prices[4] = { 4500, 5000, 5500, 4800 };
	int caffeine[4] = { 150, 120, 100, 80 };

	cout << "스타벅스의 음료 목록\n\n";
	for (int i = 0; i < 4; i++) {
		cout << "[" << (i + 1) << "] " << drinks[i] << " - 가격: " 
			<< prices[i] << "원, 카페인: " << caffeine[i] << "mg\n\n";
	}
	return 0;
}