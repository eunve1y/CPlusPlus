#include <iostream>
using namespace std;
// 맥도널드 햄버거 구조체 정의
struct McDonaldsBurger {
	string bun; // 빵 종류
	string patty; // 패티 종류
	string cheese; // 치즈 종류
	string sauce; // 소스 종류
	bool isToasted; // 구운 햄버거 여부
};
int main() {
	// 맥도널드 햄버거 변수 생성
	McDonaldsBurger myBurger;
	// 햄버거 속성 값 설정
	myBurger.bun = "Sesame Bun";
	myBurger.patty = "Beef";
	myBurger.cheese = "American Cheese";
	myBurger.sauce = "Ketchup and Mustard";
	myBurger.isToasted = true;
	// 햄버거 속성 출력
	cout << "Bun: " << myBurger.bun << endl;
	cout << "Patty: " << myBurger.patty << endl;
	cout << "Cheese: " << myBurger.cheese << endl;
	cout << "Sauce: " << myBurger.sauce << endl;
	cout << "Toasted: " << (myBurger.isToasted ? "Yes" : "No") <<
		endl;
	return 0;
}