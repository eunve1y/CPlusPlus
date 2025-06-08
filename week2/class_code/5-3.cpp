#include <iostream>
using namespace std;

int main() {
	int sunriseScore = 95;
	// 포인터 사용
	int* mapPointer = &sunriseScore;
	*mapPointer = 100; // 지도 보고 점수 바꾸기
	// 참조 사용
	int& gpsRef = sunriseScore;
	gpsRef = 110; // GPS로 바로 경치 점수 바꾸기
	cout << "최종 경치 점수: " << sunriseScore << endl; // 110

	return 0;
}