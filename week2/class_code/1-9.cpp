#include <iostream>
using namespace std;

#define PIPE_ORGAN

void PlayPipeOrgan() {
	cout << "Playing Pipe Organ" << endl;
}

void PlayPiano() {
	cout << "Playing Piano" << endl;
}

int main() {
#ifdef PIPE_ORGAN
	PlayPipeOrgan();
#else
	PlayPiano();
#endif
	return 0;
}