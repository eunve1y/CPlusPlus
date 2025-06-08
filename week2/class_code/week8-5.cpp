#include <iostream>
#include <string>
using namespace std;
int main() {
	// 스테이크 이름 배열
	string steaks[4] = { "토마호크", "갈릭립아이", "부채살스테이크",
	"채끝등심" };
	// 무게 정보 배열 (단위: g)
	int weights[4] = { 1000, 350, 300, 400 };
	// 가격 정보 배열 (단위: 원)
	int prices[4] = { 79000, 39000, 34000, 45000 };
	// 출력
	cout << " 아웃백 스테이크 메뉴판\n\n";
	for (int i = 0; i < 4; i++) {
		cout << "[" << (i + 1) << "] " << steaks[i]
			<< " - 무게: " << weights[i] << "g / 가격: "
				<< prices[i] << "원\n";
	}
	return 0;
}