#include <iostream>;
using namespace std;

void PrintSystem() {
	cout << __FILE__ << endl;
	cout << __LINE__ << endl;
	cout << __FUNCTION__ << endl;

#ifdef _M_X64
	cout << "64Bit x64 Windows!" << endl;
#else
	cout << "32Bit x86 Windows!" << endl;
#endif
}