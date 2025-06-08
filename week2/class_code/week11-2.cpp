#include <iostream>
using namespace std;

// 함수 선언: 아이스크림 가격을 계산하는 함수
double calculateTotalPrice(int iceCreamCount, double pricePerIceCream);

int main() {
	int iceCreamCount = 5; // 주문된 아이스크림의 개수
	double pricePerIceCream = 3.99; // 하나의 아이스크림 가격
	// 함수 호출: calculateTotalPrice 함수로 총 가격 계산
	double totalPrice = calculateTotalPrice(iceCreamCount, pricePerIceCream);
	// 결과 출력
	cout << "Total Price: $" << totalPrice << endl;
	return 0;
}
// 함수 정의: calculateTotalPrice 함수
double calculateTotalPrice(int iceCreamCount, double pricePerIceCream) {
	return iceCreamCount * pricePerIceCream; // 아이스크림 가격 계산하여 반환
}