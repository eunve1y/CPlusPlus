#include <iostream> // 입출력 기능(cout, endl 등)을 사용하기 위한 헤더 파일 포함
#include <string> // 문자열(string) 타입을 사용하기 위한 헤더 파일 포함
using namespace std; // std:: 없이 cout, string 등을 바로 사용하기 위한 선언

// 문자열 배열과 크기를 받아 코스 메뉴를 출력하는 함수 정의
void printCourses(string courses[], int size) {
	cout << "🍽 오늘의 파인다이닝 코스"; // 파인다이닝 코스 제목 출력 (줄바꿈 문자 없음)
	for (int i = 0; i < size; i++) { // i 를 0 부터 size-1 까지 반복 (배열의 크기만큼 반복)
		cout << (i + 1) << ". " << courses[i] << endl;
		// (i+1)번째 코스 이름을 출력 (courses[i]로 배열 요소에 접근)
		// endl 은 줄바꿈 역할을 한다
	}
}

int main() { // 프로그램 시작점
	string courses[4] = { "아뮤즈 부쉬", "시그니처 스프", "한우 스테이크", "디저트" };
	// 문자열 배열 courses 선언 및 초기화 (4 개의 파인다이닝 코스 메뉴 저장)
	printCourses(courses, 4); // printCourses 함수 호출, 배열 이름과 크기(4)를 전달
	return 0; // 프로그램 정상 종료
}