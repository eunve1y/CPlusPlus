#include <iostream>	//표준 입출력 라이브러리 포함
using namespace std;	// c++ 표준 라이브러리의 이름 공간 사용

double calculateTotalPrice(int donutCount, int drinkCount, double pricePerDonut, double pricePerDrink);	// 총 가격 계산 함수 선언

int main() {	// 프로그램 실행 시작점
	int donutCount = 3;	// 도넛 개수 설정
	int drinkCount = 2;	// 음료 개수 설정
	double pricePerDonut = 1.99;	// 도넛 가격 설정
	double pricePerDrink = 2.49;	// 음료 가격 설정

	double totalPrice = calculateTotalPrice(donutCount, drinkCount, pricePerDonut, pricePerDrink);	// 함수 호출 및 반환값 저장

	cout << "Total Price: $" << totalPrice << endl;	// 결과 출력

	return 0;	//프로그램 종료
}

double calculateTotalPrice(int donutCount, int drinkCount, double pricePerDonut, double pricePerDrink) {	//함수 정의부
	return (donutCount * pricePerDonut) + (drinkCount * pricePerDrink);	// 총 가격 계산 및 반환
}