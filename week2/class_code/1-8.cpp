#include <iostream>
using namespace std;	

#define MULTIPLY(x, y) x * y

void main()
{
	cout << MULTIPLY(1 + 1, 1 + 2) << endl;
	cout << MULTIPLY(1 + 1, 1 + 2) / MULTIPLY(1 + 1, 1 + 2) << endl;
}