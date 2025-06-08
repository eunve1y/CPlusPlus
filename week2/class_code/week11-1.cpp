#include <iostream>
using namespace std;

// 버거킹 메뉴를 처리하는 함수 정의
double calculatePrice(int burgerCount, double pricePerBurger) {
	return burgerCount * pricePerBurger; // 버거의 가격을 계산하여 반환
}

int main() {
	int burgerCount = 3; // 주문된 버거의 수
	double pricePerBurger = 5.99; // 하나의 버거 가격
	// calculatePrice 함수 호출
	double totalPrice = calculatePrice(burgerCount, pricePerBurger);
	// 결과 출력
	cout << "Total Price: $" << totalPrice << endl;
	return 0;
}