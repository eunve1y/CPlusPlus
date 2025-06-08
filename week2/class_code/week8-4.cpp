#include <iostream>
#include <string>
using namespace std;
int main() {
	// 샌드위치 이름 배열
	string sandwiches[4] = { "에그마요", "터키", "로스트비프",
	"이탈리안비엠티" };
	// 칼로리 정보 배열 (단위: kcal)
	int calories[4] = { 480, 280, 320, 410 };
	// 가격 정보 배열 (단위: 원)
	int prices[4] = { 4600, 5100, 5600, 5400 };
	// 출력
	cout << " 서브웨이 대표 샌드위치 메뉴\n\n";
	for (int i = 0; i < 4; i++) {
		cout << "[" << (i + 1) << "] " << sandwiches[i]
			<< " - 칼로리: " << calories[i] << "kcal / 가격: "
				<< prices[i] << "원\n";
	}
	return 0;
}