#include <iostream>
#include <string>
using namespace std;

int main() {
	string steaks[4] = { "블랙 앵거스", "토마호크", "립아이", "티본" };
	int weights[4] = { 300, 500, 400, 600 }; 
	int prices[4] = { 25000, 45000, 35000, 40000 };

	cout << "아웃백 스테이크 메뉴\n\n";
	for (int i = 0; i < 4; i++) {
		cout << "[" << (i + 1) << "] " << steaks[i]
			<< " - 무게: " << weights[i] << "g / 가격: "
				<< prices[i] << "원\n";
	}
	return 0;
}