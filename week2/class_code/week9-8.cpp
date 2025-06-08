// 예제 5: 피자 사이즈 목록 배열 크기 구하기

#include <iostream> 
using namespace std; 

int main() {
	int pizzaSizes[4] = { 10, 12, 14, 16 };
	// 피자 사이즈 배열 선언 및 초기화 (10인치, 12인치, 14인치, 16인치)
	int totalSize = sizeof(pizzaSizes);
	// 배열 전체 크기를 바이트(byte) 단위로 구함
	int elementSize = sizeof(pizzaSizes[0]);
	// 배열 하나의 요소 크기를 바이트 단위로 구함
	int numberOfPizzas = totalSize / elementSize;
	// 배열 요소 개수 = 전체 크기 ÷ 요소 하나 크기
	cout << " 피자 사이즈 종류 수: " << numberOfPizzas << "개" << endl;
	// 배열 요소 수 출력
	return 0; 
}