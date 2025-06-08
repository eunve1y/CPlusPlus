#include <iostream>
using namespace std;

// 함수 선언: 도넛과 음료의 가격을 계산하는 함수 (중복 정의)
double calculateTotalPrice(int donutCount, double pricePerDonut);
double calculateTotalPrice(int donutCount, double pricePerDonut, int drinkCount, double
	pricePerDrink);

int main() {
	int donutCount = 3;
	double pricePerDonut = 1.99;
	int drinkCount = 2;
	double pricePerDrink = 2.49;
	double totalPrice = calculateTotalPrice(donutCount, pricePerDonut, drinkCount,
		pricePerDrink);
	cout << "Total Price: $" << totalPrice << endl;
	return 0;
}
double calculateTotalPrice(int donutCount, double pricePerDonut) {
	return donutCount * pricePerDonut;
}

double calculateTotalPrice(int donutCount, double pricePerDonut, int drinkCount, double
	pricePerDrink) {
	return (donutCount * pricePerDonut) + (drinkCount * pricePerDrink);
}