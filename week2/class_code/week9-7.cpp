// 예제 4: 레스토랑 주문 수량 계산하기(배열 인자 사용)

#include <iostream> 
using namespace std; 

// 주문 수량 배열과 크기를 받아 총 주문량을 계산하는 함수 정의
int calculateTotal(int orders[], int size) {
	int total = 0; // 총 주문량을 저장할 변수 초기화
	for (int i = 0; i < size; i++) { // i를 0부터 size-1까지 반복
		total += orders[i]; // 각 테이블 주문량을 total에 누적
	}
	return total; // 총 주문량 반환
}
int main() { // 프로그램 시작점
	int tableOrders[3] = { 2, 3, 1 };
	// 각 테이블별 주문 수량 배열 (예: 1번 테이블 2개, 2번 테이블 3개, 3번 테이블 1개 주문)
	int totalOrders = calculateTotal(tableOrders, 3); // 주문 수량 배열과 크기를 함수에 전달
		cout << "오늘 총 주문 수량: " << totalOrders << "개" << endl; // 총 주문량 출력
		return 0; 
}