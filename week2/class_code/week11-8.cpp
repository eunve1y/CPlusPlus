#include <iostream> 
using namespace std; 

// 함수 선언: 피자 가격 계산 (중복 정의) 
double calculateTotalPrice(int pizzaCount, double pricePerPizza); 
double calculateTotalPrice(int pizzaCount, double pricePerPizza, 
	int drinkCount, double pricePerDrink); 
int main() { 
	int pizzaCount = 2; // 주문된 피자 개수 
	double pricePerPizza = 12.00; // 하나의 피자 가격 
	int drinkCount = 3; // 주문된 음료 개수 
	double pricePerDrink = 2.50; // 하나의 음료 가격 
	
	// 함수 호출: calculateTotalPrice 함수로 총 가격 계산 (피자와 음료 모두 계산) 
    double totalPrice = calculateTotalPrice(pizzaCount, pricePerPizza, 
		drinkCount, pricePerDrink); 
	// 결과 출력 
	cout << "Total Price: $" << totalPrice << endl; return 0; 
}

// 함수 정의: 피자 가격만 계산 
double calculateTotalPrice(int pizzaCount, double pricePerPizza) { 
	return pizzaCount * pricePerPizza; // 피자 가격 계산하여 반환 
} 

// 함수 정의: 피자와 음료 가격 계산 
double calculateTotalPrice(int pizzaCount, double pricePerPizza, 
int drinkCount, double pricePerDrink) { 
	return (pizzaCount * pricePerPizza) + (drinkCount * pricePerDrink); 
	// 피자와 음료 가격 합산하여 반환
}