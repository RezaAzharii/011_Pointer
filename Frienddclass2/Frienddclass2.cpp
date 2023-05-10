#include <iostream>
using namespace std;

class mahasiswa {
private:
	string nama;
public:
	friend void setNama(mahasiswa& a, string);
};

void setNama(mahasiswa& a, string pNama) {
	a.nama = pNama;
	cout << "nama: " << a.nama;
}
int main() {
	mahasiswa mhs;
	setNama(mhs, "Joko Kumat");
	cout << endl;
	system("pause");
	return 0;
}