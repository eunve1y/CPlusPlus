#include <iostream>
#include <string>
using namespace std;
int main() {
	// 음료 이름 배열
	string drinks[4] = { "아메리카노", "카페라떼", "카푸치노", "콜드브루" };
	// 가격 정보 배열 (단위: 원)
	int prices[4] = { 4500, 5000, 5000, 5500 };
	// 카페인 함량 배열 (단위: mg)
	int caffeine[4] = { 150, 75, 80, 200 };
	// 출력
	cout << " 스타벅스 메뉴판\n\n";
	for (int i = 0; i < 4; i++) {
		cout << "[" << (i + 1) << "] " << drinks[i] << " - 가격: "
			<< prices[i] << "원 / 카페인: " << caffeine[i] << "mg\n";
	}
	return 0;
}