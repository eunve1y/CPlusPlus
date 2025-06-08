#include <iostream>
using namespace std;

// 함수 선언: 도넛과 음료의 가격을 계산하는 함수
double calculateTotalPrice(int donutCount, int drinkCount, 
	double pricePerDonut, double pricePerDrink);

int main() {
	int donutCount = 3; // 주문된 도넛의 개수
	int drinkCount = 2; // 주문된 음료의 개수
	double pricePerDonut = 1.99; // 하나의 도넛 가격
	double pricePerDrink = 2.49; // 하나의 음료 가격
	// calculateTotalPrice 함수 호출
	double totalPrice = calculateTotalPrice(donutCount, drinkCount, 
		pricePerDonut,pricePerDrink);
	// 결과 출력
	cout << "Total Price: $" << totalPrice << endl;
	return 0;
}

// 함수 정의: calculateTotalPrice 함수
double calculateTotalPrice(int donutCount, int drinkCount, 
	double pricePerDonut, double pricePerDrink) {
	return (donutCount * pricePerDonut) + (drinkCount * pricePerDrink); 
	// 도넛과 음료가격 계산하여 반환
}