#include <iostream>
using namespace std;

int main() {
	int jejuView = 100; // 성산일출봉에서 본 경치 점수!
	int* pointerToView = &jejuView; // 경치 점수를 가리키는 포인터

	cout << "경치 점수: " << jejuView << endl;
	cout << "포인터가 가리키는 주소: " << pointerToView << endl;
	cout << "포인터로 접근한 점수: " << *pointerToView << endl;

	*pointerToView = 120; // 포인터를 통해 경치 점수 업데이트
	cout << "업데이트된 점수: " << jejuView << endl;

	return 0;
}