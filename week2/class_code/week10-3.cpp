#include <iostream>
using namespace std;
// 아웃백 스테이크하우스 메뉴 구조체 정의
struct OutbackMenu {
	string steak; // 스테이크 종류
	string side; // 사이드 메뉴 종류
	string drink; // 음료 종류
	bool isGrilled; // 구운 스테이크 여부
};
int main() {
	// 아웃백 스테이크하우스 메뉴 변수 생성
	OutbackMenu myMeal;
	// 점 연산자(.)를 사용하여 구조체 멤버에 접근
	myMeal.steak = "Ribeye";
	myMeal.side = "Mashed Potatoes";
	myMeal.drink = "Iced Tea";
	myMeal.isGrilled = true;
	// 메뉴 속성 출력
	cout << "Steak: " << myMeal.steak << endl;
	cout << "Side: " << myMeal.side << endl;
	cout << "Drink: " << myMeal.drink << endl;
	cout << "Grilled: " << (myMeal.isGrilled ? "Yes" : "No") << endl;
	// 포인터를 이용한 화살표 연산자(->) 사용
	OutbackMenu* pMeal = &myMeal;
	// 화살표 연산자(->)를 사용하여 포인터가 가리키는 구조체 멤버에접근
		cout << "Using pointer(->) :";
		cout << "Steak: " << pMeal->steak << endl;
	cout << "Side: " << pMeal->side << endl;
	cout << "Drink: " << pMeal->drink << endl;
	cout << "Grilled: " << (pMeal->isGrilled ? "Yes" : "No") << endl;
	return 0;
}