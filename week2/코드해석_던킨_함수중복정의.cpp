#include <iostream>	//표준 입출력 라이브러리 포함
using namespace std;	// c++ 표준 라이브러리의 이름 공간 사용

double calculateTotalPrice(int donutCount, double pricePerDonut);
double calculateTotalPrice(int donutCount, double pricePerDonut, int drinkCount, double pricePerDrink);

int main() {
	int donutCount = 3;
	double pricePerDonut = 1.99;
	int drinkCount = 2;
	double pricePerDrink = 2.49;

	double totalPrice = calculateTotalPrice(donutCount, pricePerDonut, drinkCount, pricePerDrink);	
	
	cout << "Total Price: $" << totalPrice << endl;
	return 0;
}

double calculateTotalPrice(int donutCount, double pricePerDonut) {	// 도넛만 주문한 경우의 함수 정의
	return donutCount * pricePerDonut;	// 도넛 가격 계산 반환
}

double calculateTotalPrice(int donutCount, double pricePerDonut, int drinkCount, double pricePerDrink) {	// 도넛과 음료 함께 주문한 경우 함수 정의
	return (donutCount*pricePerDonut) + (drinkCount*pricePerDrink);	// 도넛과 음료 가격 계산 반환
}