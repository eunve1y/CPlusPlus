#include <iostream> 
using namespace std; 

// 함수 선언: 음료와 간식 가격을 계산하는 함수 
double calculateTotalPrice(int drinkCount, double pricePerDrink); 
double calculateTotalPrice(int drinkCount, double pricePerDrink, 
	int snackCount, double pricePerSnack); 
int main() { 
	int drinkCount = 3; // 주문된 음료의 개수 
	double pricePerDrink = 4.00; // 하나의 음료 가격 
	int snackCount = 2; // 주문된 간식의 개수 
	double pricePerSnack = 2.50; // 하나의 간식 가격 
	// 함수 호출: calculateTotalPrice 함수로 총 가격 계산 (음료와 간식 모두 계산) 
	double totalPrice = calculateTotalPrice(drinkCount, pricePerDrink, 
		snackCount, pricePerSnack); 
	// 결과 출력 
	cout << "Total Price: $" << totalPrice << endl; return 0; } 

// 함수 정의: 음료 가격만 계산 
double calculateTotalPrice(int drinkCount, double pricePerDrink) { 
	return drinkCount * pricePerDrink; // 음료 가격 계산하여 반환 
} 

// 함수 정의: 음료와 간식 가격을 모두 계산 
double calculateTotalPrice(int drinkCount, double pricePerDrink, 
int snackCount, double pricePerSnack) {
	return (drinkCount * pricePerDrink) + (snackCount * pricePerSnack); 
	// 음료와 간식 가격 합산하여 반환 
}