#include <iostream>
using namespace std;
int main() {
	cout << "TINH DIEN TICH CHU VI HINH TRON\n>";
	
	double bankinh, chuvi, dientich, pi;
	pi = 3.14;
	cout << "Nhap ban kinh:"; cin >> bankinh;


	chuvi = 2 * pi * bankinh;
	dientich = pi * bankinh * bankinh;

	cout << "chu vi: " << chuvi << endl;
	cout << "dien tich: " << dientich << endl;

	return 0;
}
