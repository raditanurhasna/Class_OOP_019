#include <iostream>
using namespace std;

class Mahasiswa {

private:
	int main;
	string nama;
public :
	void inputdata() {
		cout << "Masukkan NIM : ";
		cin >> nim;
		cout << "Masukkan Nama : ";
		cin >> nama;
	}
	void tampilkandata() {
		cout << "\nNIM : " << nim << endl;
		cout << "nama : " << nama << endl;
	}
};

class Matakuliah {
private:
	string kode;
	string namamk;
	int sks;


}
