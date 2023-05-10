#include <iostream>
#include <string>
using namespace std;

class pelajar;

class manusia {
public:
	void showNilaiPelajar(pelajar&);
};

class pelajar {
private:
	int nilai;
public:
	pelajar() {
		nilai = 100;
	}
	friend void manusia::showNilaiPelajar(pelajar& x);
};

void manusia::showNilaiPelajar(pelajar& x) {
	cout << "Nilai Pelajar: " << x.nilai;
}

int main() {
	manusia m;
	pelajar p;
	m.showNilaiPelajar(p);
	cout << endl;
	system("\npause");
	return 0;
}