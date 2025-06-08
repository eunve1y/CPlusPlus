#include <iostream>
using namespace std;

// 함수 선언: 가격 계산
double calculateTotalPrice(int itemCount, double itemPrice);

int main() {
    int itemCount = 3;        // 주문된 항목의 개수
    double itemPrice = 6.50;  // 하나의 항목 가격

    // 함수 호출: calculateTotalPrice 함수로 총 가격 계산
    double totalPrice = calculateTotalPrice(itemCount, itemPrice);

    // 결과 출력
    cout << "Total Price: $" << totalPrice << endl;
    return 0;
}

// 함수 정의: calculateTotalPrice
double calculateTotalPrice(int itemCount, double itemPrice) {
    return itemCount * itemPrice; // 총 가격 계산하여 반환
}
