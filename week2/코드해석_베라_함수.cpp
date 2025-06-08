#include <iostream>	//표준 입출력 라이브러리 포함
using namespace std;	// c++ 표준 라이브러리의 이름 공간 사용

double calculateTotalPrice(int iceCreamCount, double pricePerIceCream);	// 총 가격 계산하는 함수 선언

// main 함수 전에 함수 선언 정의하면, 
// 컴파일러가 함수를 인식할 수 있게 미리 알려줌

int main() {	// 프로그램 시작점
	int iceCreamCount = 5;	// 주문 수 5로 설정
	double pricePerIceCream = 3.99;	// 개당 가격 설정
	double totalPrice = calculateTotalPrice(iceCreamCount, pricePerIceCream);	//함수 호출 결과 저장

	cout << "Total Price: $" << totalPrice << endl;	// 결과 출력

	return 0;	// 정상 종료
}

double calculateTotalPrice(int iceCreamCount, double pricePerIceCream) {	// 함수 정의
	return iceCreamCount * pricePerIceCream;	// 총 가격 계산하여 반환함
}