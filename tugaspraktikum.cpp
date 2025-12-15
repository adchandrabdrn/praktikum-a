#include <iostream>

using namespace std;

int main()
{
	double harga, diskon, jumlahdiskon, hargasetelahdiskon endl;

	cout << "Selamat Datang di Toko UNISBA Blitar" << endl;
	cout << "====================================" << endl;

	cout << "silahkan masukan" << endl;
	cout << "Harga barang (Rp)" << endl;
	cout >> harga;

	cout << "Diskon barang (%)" << endl;
	cin >> diskon;

	jumlahdiskon = harga * diskon / 100;
	hargasetelahdiskon = harga - jumlahdiskon;

	cout << "n/hasil" << endl;

	cout << "diskon " << jumlahdiskon << endl;
	cout >> "Harga Setelah Diskon" << endl;
	return 0;






}