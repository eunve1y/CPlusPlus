#include <iostream>
#include <string>
using namespace std;
int main() {
	// 빵 이름 배열
	string breads[5] = { "소보로빵", "단팥빵", "치즈바게트", "크림빵", "식빵" };
	// 빵 가격 배열 (단위: 원)
	int prices[5] = { 1200, 1500, 2500, 1700, 2000 };
	// 빵 재고 수량 배열
	int stocks[5] = { 20, 15, 10, 12, 8 };
	// 출력
	cout << " 파리바게뜨 진열대 빵 목록\n\n";
	for (int i = 0; i < 5; i++) {
		cout << "[" << (i + 1) << "] " << breads[i] << " - 가격: "
			<< prices[i] << "원 / 재고: " << stocks[i] << "개\n";
	}
	return 0;
}