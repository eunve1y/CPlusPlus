#include <iostream>
#include <string>
using namespace std;

int main() {
	string breads[5] = {"소보로빵", "단팥빵", "치즈바게뜨", "크림빵", "식빵"};
	int prices[5] = { 1200, 1500, 2500, 1700, 2000 };
	int stocks[5] = { 20, 15, 10, 12, 8 };

	cout << "파리바게뜨의 빵 목록\n\n";
	for (int i = 0; i < 5; i++) {
		cout << "[" << (i + 1) << "]" << breads[i] << "- 가격: " 
			<< prices[i] << "원, 재고: " << stocks[i] << "개" << endl;	
	}
	return 0;


}