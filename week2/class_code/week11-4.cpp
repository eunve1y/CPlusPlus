#include <iostream>
#include <cstdarg> // 가변 인자 함수를 사용하기 위한 헤더 파일
using namespace std;

// 가변 인자 함수 선언: 도넛 가격을 계산하는 함수
double calculateTotalPrice(int num, ...);

int main() {
	// calculateTotalPrice 함수 호출
	double totalPrice = calculateTotalPrice(3, 1.99, 2.49, 3.19);
	// 결과 출력
	cout << "Total Price: $" << totalPrice << endl;
	return 0;
}

// 가변 인자 함수 정의: calculateTotalPrice
double calculateTotalPrice(int num, ...) {
	va_list args; // 가변 인자를 처리할 변수
	va_start(args, num); // 가변 인자 리스트 초기화
	double total = 0.0;
	// 인자들을 반복적으로 받아서 합산
	for (int i = 0; i < num; i++) {
		total += va_arg(args, double); // 각 인자를 double 타입으로 받아서 더함
	}
	va_end(args); // 가변 인자 리스트 종료
	return total; // 총 가격 반환
}