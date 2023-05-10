#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim();
};

void mahasiswa::showNim() {
	cout << "No Induk = " << nim << endl;
}

int main() {
	mahasiswa mhs{ 1 };
	mhs.showNim();

	mahasiswa& ref = mhs;
	ref.nim = 2;
	mhs.showNim();
}