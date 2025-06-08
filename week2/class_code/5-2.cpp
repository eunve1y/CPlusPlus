#include <iostream>
using namespace std;

int main() {
	int sunriseView = 95;	// 포인터: 성산일출봉의 위치 정보 저장
	int* travelGuide = &sunriseView;	// 포인터를 사용해 정보 확인
	cout << "여행지 경치 점수: " << sunriseView << "점\n";
	cout << "포인터가 가리키는 주소: " << travelGuide << endl;
	cout << "포인터를 통해 본 경치 점수: " << *travelGuide << "점\n";

	*travelGuide = 100; // 날씨가 너무 좋아서 점수 업!
	cout << "업데이트된 경치 점수: " << sunriseView << "점\n";	// 업데이트된 정보 출력

	int* hallasan = new int; // 새로운 여행지 동적 메모리 예약
	*hallasan = 120;
	cout << "한라산 정상 경치 점수: " << *hallasan << "점\n";
	delete hallasan;  // 여행 끝, 메모리 반납 = 동적으로 할당된 메모리 해제

	return 0;
}