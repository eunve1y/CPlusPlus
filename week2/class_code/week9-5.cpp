// 예제 2: 시장 채소 가격 수정하기(포인터로 배열 값 변경)

#include <iostream> 
using namespace std; 

int main() {
	int vegetables[3] = { 3000, 2500, 2800 }; // 채소 가격 배열 선언 (3종류: 무, 배추, 당근 가격)
	int* p = vegetables; // 포인터 p를 선언하고, vegetables 배열의 첫 번째 요소 주소를 저장
		* (p + 1) = 2600; // 포인터 연산을 사용해 두 번째 채소(배추) 가격을 2600원으로 수정
		cout << "수정된 시장 채소 가격:" << endl; // 제목 출력
		for (int i = 0; i < 3; i++) { // i를 0부터 2까지 반복 (배열 요소 개수만큼)
			cout << (i + 1) << "번 채소 가격: " << *(p + i) << "원" << endl;
			// 포인터 p를 이용해 현재 채소 가격 출력
		}
		return 0; 
}