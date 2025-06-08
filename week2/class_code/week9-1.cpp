#include <iostream> // 입출력을 사용하기 위한 헤더 파일 포함
using namespace std; // std:: 없이 cout, endl 등을 사용하기 위해 선언

int main() { // 프로그램의 시작점 main 함수
	int burritos[3] = { 700, 750, 800 }; // burritos 라는 이름의 정수형 배열 선언 및 초기화 (각요소는 각각 700g, 750g, 800g)
	int* p = burritos; // 포인터 p 를 선언하고, burritos 배열의 첫 번째 요소 주소를 p 에 저장
		for (int i = 0; i < 3; i++) { // i 를 0 부터 2 까지 반복 (배열 요소 수만큼 반복)
			cout << "부리또 " << (i + 1) << " : " << *(p + i) << "g" << endl;
			// (i+1)번째 부리또와 해당 부리또의 무게를 출력
			// *(p + i)는 p 포인터(배열 첫 번째 요소)에서 i 만큼 떨어진 값을 의미
		}
	return 0; // 프로그램 정상 종료
}
