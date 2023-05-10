#include <iostream>
#include <string>
using namespace std;

class siswa;

class orang {
private:
	string nama;
public:
	void setNama(string pNama);

	friend class siswa;
};

class siswa {
private:
	int id;
public:
	void setId(int pId);
	void displayAll(orang& a);
};

void siswa::displayAll(orang& a) {
	cout << id << endl << a.nama;
}

void siswa::setId(int pId) {
	id = pId;
}

void orang::setNama(string pNama) {
	nama = pNama;
}
 
int main() {
	orang o;
	o.setNama("Joko Kumat");
	siswa s;
	s.setId(1);
	s.displayAll(o);
	cout << endl;
	system("pause");
	return 0;
}