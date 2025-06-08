#include <iostream> using namespace std;
using namespace std;

// 함수 정의: 햄버거 가격을 계산하는 함수
double calculateTotalPrice(int burgerCount, double pricePerBurger) {
	return burgerCount * pricePerBurger; // 햄버거 가격 계산하여 반환 }
}

int main() {
	int burgerCount = 4; // 주문된 햄버거의 개수 
	double pricePerBurger = 3.50; // 하나의 햄버거 가격 
	// 함수 호출: calculateTotalPrice 함수로 총 가격 계산 
	double totalPrice = calculateTotalPrice(burgerCount, pricePerBurger); 
	// 결과 출력 
	cout << "Total Price: $" << totalPrice << endl; return 0; 
}