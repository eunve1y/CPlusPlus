#include <iostream>
using namespace std;
int main() {
	int gopchang[5] = { 100, 120, 110, 130, 115 }; // 각 곱창 무게 (g)
	int totalSize = sizeof(gopchang); // 배열 전체 크기 (byte)
	int elementSize = sizeof(gopchang[0]); // 요소 하나 크기 (byte)
	int numOfSkewers = totalSize / elementSize; // 총 곱창 꼬치 수
	cout << " 총 곱창 꼬치 수: " << numOfSkewers << "개" << endl;
	return 0;
}