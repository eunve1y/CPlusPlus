#include <iostream>	//표준 입출력 라이브러리 포함
using namespace std;	// c++ 표준 라이브러리의 이름 공간 사용

double calculatePrice(int burgerCount, double pricePerBurger) {		// 버거 개수, 가격을 매개변수로 받아 총 가격 반환하는 함수
	return burgerCount * pricePerBurger;	// 계산된 총가격 반환
}

int main() {	//프로그램의 시작점
	int burgerCount = 3;	//주문된 버거 수 3으로 설정
	double pricePerBurger = 5.99;	// 버거당 개당 가격 설정
	double totalPrice = calculatePrice(burgerCount, pricePerBurger);	//함수 호출 결과 저장

	cout << "Total Price: $" << totalPrice << endl;	// 결과 출력

	return 0;	// 프로그램이 정상적으로 종료됨
}