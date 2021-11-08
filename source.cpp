#include <iostream>
using namespace std;
int tong(int a, int b);
int hieu(int a, int b);

int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";
	cin >> phepToan;
<<<<<<< HEAD
	if(phepToan == "-")
		cout << "Hiệu 2 số: " << hieu(a,b);
=======
	if(phepToan == "+")
		cout << "Tổng 2 số: " << tong(a,b);
>>>>>>> 7e719260c936beaa15497c4a3fb5b22f72b1c88f
	system("pause");
	return 0;
}

<<<<<<< HEAD
int hieu(int a, int b){
	return a - b;
=======
int tong(int a, int b){
	return a + b;
>>>>>>> 7e719260c936beaa15497c4a3fb5b22f72b1c88f
}