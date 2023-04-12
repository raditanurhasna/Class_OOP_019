#include <iostream>
using namespace std;

class Mahasiswa {

private:
	int nim;
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

public:
	void InputMK();
	void TampilMK();
}


void Matakuliah::InputMK() {
	cout << "\nMasukkan kode Mata Kuliah : ";
	cin >> kode;
	cout << "Masukkan Nama Mata kuliah : ";
	cin >> namamk;
	cout << "Masukkan Sks Mata Kuliah : ";
	cin >> sks;
}

void Matakuliah::TampilMK() {
	cout << "\nkode : " << kode << endl; 
	cout << "Nama Matakuliah : " << namamk << endl;
	cout << "Jumlah Sks : " << sks << endl;
}

int main()
{
	Mahasiswa mhs;
	Mahasiswa mk;


	mhs.inputdata();
	mhs.tampilkandata();


	mk.inputdata();
	mk.tampilkandata();
}

