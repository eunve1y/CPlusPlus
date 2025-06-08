#include <iostream>
using namespace std;
// 샤브샤브 재료를 나타내는 공용체 정의
union ShabuShabu {
	string meat; // 고기 종류
	string vegetable; // 채소 종류
	string sauce; // 소스 종류
};
int main() {
	// 샤브샤브 공용체 변수 생성
	ShabuShabu myShabu;
	// 고기 종류 할당
	myShabu.meat = "Beef";
	// 고기 정보 출력
	cout << "Meat: " << myShabu.meat << endl;
	// 채소 종류 할당 (이전에 할당된 고기 값 덮어쓰기)
	myShabu.vegetable = "Spinach";
	// 채소 정보 출력
	cout << "Vegetable: " << myShabu.vegetable << endl;
	// 소스 종류 할당 (이전에 할당된 채소 값 덮어쓰기)
	myShabu.sauce = "Sesame Sauce";
	// 소스 정보 출력
	cout << "Sauce: " << myShabu.sauce << endl;
	// 메모리 크기 출력
	cout << "Size of ShabuShabu union : " << sizeof(myShabu) << " bytes" << endl;
		return 0;
}