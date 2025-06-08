// 예제 3: 레스토랑 메뉴판 출력하기(배열을 함수로 전달)

#include <iostream> 
#include <string> 
using namespace std; 

// 메뉴 배열과 메뉴 개수를 받아 출력하는 함수 정의
void printMenu(string menu[], int size) {
	cout << "레스토랑 메뉴판:" << endl; // 메뉴판 제목 출력
	for (int i = 0; i < size; i++) { // i를 0부터 size-1까지 반복
		cout << (i + 1) << ". " << menu[i] << endl; // 메뉴 항목 출력
	}
}
int main() { 
	string menuItems[4] = { "샐러드", "스테이크", "파스타", "디저트" };
	// 메뉴 항목 배열 선언 및 초기화
	printMenu(menuItems, 4); // 메뉴 배열과 크기를 함수에 전달하여 출력
	return 0; 
}