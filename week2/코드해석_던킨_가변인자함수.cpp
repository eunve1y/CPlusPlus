#include <iostream>	//표준 입출력 라이브러리 포함
#include <cstdarg>	// 가변 인자 함수 사용하기 위한 헤더파일 포함시킴
using namespace std;	// c++ 표준 라이브러리의 이름 공간 사용

double calculateTotalPrice(int num, ...);	// 가변 인자 받는 함수 선언

int main() {	// 프로그램 시작점
	double totalPrice = calculateTotalPrice(3, 1.99, 2.49, 3.19);	//가변 인자 함수 호출

	cout<<"Total Price: $" << totalPrice << endl;	// 결과 출력

	return 0;	// 프로그램 정상 종료
}

double calculateTotalPrice(int num, ...) {	//함수 정의 시작
	va_list args;	// 가변 인자 처리 변수 선언
	va_start(args, num);	// 가변 인자 리스트 초기화

	double total = 0.0;

	for (int i = 0; i < num; i++) {
		total += va_arg(args, double);	// 각 인자를 double로 받아 더함
	}

	va_end(args);	// 가변 인자 리스트 종료

	return total;	// 총 가격 반환
}