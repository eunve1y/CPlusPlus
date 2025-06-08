#include <iostream>
using namespace std;
// KFC 메뉴 구조체 정의
struct KFCMenu {
	string chicken; // 닭고기 종류
	int pieces; // 조각 수
	float price; // 가격
	char size; // 크기 ('S', 'M', 'L')
};
int main() {
	// KFC 메뉴 변수 생성
	KFCMenu myMeal;
	// 메뉴 속성 값 설정
	myMeal.chicken = "Fried Chicken";
	myMeal.pieces = 8;
	myMeal.price = 15.99f;
	myMeal.size = 'M';
	// 메뉴 속성 출력
	cout << "Chicken: " << myMeal.chicken << endl;
	cout << "Pieces: " << myMeal.pieces << endl;
	cout << "Price: $" << myMeal.price << endl;
	cout << "Size: " << myMeal.size << endl;
	// 메모리 구조 출력 (구조체 크기 및 각 멤버의 주소 출력)
	cout << "Size of KFCMenu structure : " << sizeof(myMeal) << " bytes" << endl;
		cout << "Address of chicken: " << &myMeal.chicken << endl;
	cout << "Address of pieces: " << &myMeal.pieces << endl;
	cout << "Address of price: " << &myMeal.price << endl;
	cout << "Address of size: " << &myMeal.size << endl;
	return 0;
}