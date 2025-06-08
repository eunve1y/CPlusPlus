#include <iostream>
using namespace std;
// 부대찌개 재료를 나타내는 구조체 정의
struct BudaeJjigae {
	string sausage; // 소세지 종류
	string ham; // 햄 종류
	string kimchi; // 김치 여부
	bool isSpicy; // 맵기 여부
};
// 부대찌개 내용 출력 함수 (값 전달)
void printBudaeJjigae(BudaeJjigae jjigae) {
	cout << "Sausage: " << jjigae.sausage << endl;
	cout << "Ham: " << jjigae.ham << endl;
	cout << "Kimchi: " << jjigae.kimchi << endl;
	cout << "Spicy: " << (jjigae.isSpicy ? "Yes" : "No") << endl;
}
// 부대찌개 내용 수정 함수 (참조 전달)
void makeItSpicy(BudaeJjigae& jjigae) {
	jjigae.isSpicy = true;
}
int main() {
	// 부대찌개 변수 생성
	BudaeJjigae myBudaeJjigae;
	// 부대찌개 속성 값 설정
	myBudaeJjigae.sausage = "Beef Sausage";
	myBudaeJjigae.ham = "Pork Ham";
	myBudaeJjigae.kimchi = "Yes";
	myBudaeJjigae.isSpicy = false;
	// 부대찌개 내용 출력 (값 전달)
	cout << "Before making it spicy:" << endl;
	printBudaeJjigae(myBudaeJjigae);
	// 부대찌개 내용 수정 (참조 전달)
	makeItSpicy(myBudaeJjigae);
	// 부대찌개 내용 출력 (수정 후)
	cout << "After making it spicy : " << endl;
		printBudaeJjigae(myBudaeJjigae);
	return 0;
}