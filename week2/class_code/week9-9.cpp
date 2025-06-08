// 예제 6: 치킨 메뉴 가격 배열 크기 구하기

#include <iostream> 
using namespace std; 

int main() {
	int chickenPrices[5] = { 18000, 19000, 20000, 21000, 22000 }; // 치킨 메뉴 가격 배열 선언 및 초기화 (가격은 원 단위)
	int totalSize = sizeof(chickenPrices); // 배열 전체 크기를 바이트 단위로 구함
	int elementSize = sizeof(chickenPrices[0]); // 배열 하나의 요소 크기를 바이트 단위로 구함
	int numberOfChickens = totalSize / elementSize; // 배열 요소 개수 = 전체 크기 ÷ 요소 하나 크기
	cout << "치킨 메뉴 수: " << numberOfChickens << "개" << endl; // 배열 요소 수 출력
	return 0; 
}