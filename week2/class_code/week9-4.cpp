// 예제 1: 시장의 과일 무게 출력하기(배열 + 포인터)

#include <iostream> 
using namespace std; 

int main() {
	int fruits[3] = { 150, 200, 180 }; // 과일 무게 배열 선언 (3개 과일: 150g, 200g,180g)
	int* p = fruits; // 포인터 p를 선언하고, fruits 배열의 첫 번째 요소 주소를 저장
	cout << "시장에서 판매 중인 과일 무게:" << endl; // 제목 출력
	for (int i = 0; i < 3; i++) { // i를 0부터 2까지 반복 (배열 요소 개수만큼)
		cout << (i + 1) << "번 과일: " << *(p + i) << "g" << endl;
		// 포인터 p를 이용해 현재 과일 무게 출력
		// *(p + i)는 fruits[i]와 같은 의미
	}
	return 0; 
}