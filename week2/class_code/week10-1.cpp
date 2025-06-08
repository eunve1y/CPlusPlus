#include <iostream>
using namespace std;
// 서브웨이 샌드위치 구조체 정의
struct SubwaySandwich {
	string bread; // 빵 종류
	string meat; // 고기 종류
	string cheese; // 치즈 종류
	string sauce; // 소스 종류
	bool isToasted; // 구운 샌드위치 여부
};
int main() {
	// 서브웨이 샌드위치 인스턴스 생성
	SubwaySandwich mySandwich;
	// 샌드위치 속성 값 설정
	mySandwich.bread = "Whole Wheat";
	mySandwich.meat = "Chicken";
	mySandwich.cheese = "Cheddar";
	mySandwich.sauce = "Barbecue";
	mySandwich.isToasted = true;
	// 샌드위치 속성 출력
	cout << "Bread: " << mySandwich.bread << endl;
	cout << "Meat: " << mySandwich.meat << endl;
	cout << "Cheese: " << mySandwich.cheese << endl;
	cout << "Sauce: " << mySandwich.sauce << endl;
	cout << "Toasted: " << (mySandwich.isToasted ? "Yes" : "No")
		<< endl;
	return 0;
}