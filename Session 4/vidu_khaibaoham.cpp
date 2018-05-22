#include<iostream>
using namespace std;
int Cong(int a, int b);
int Nhan(int a, int b);
main()
{
	int x, y, z, t;
	cout <<"Nhap x: ";
	cin >> x;
	cout << "\nNhap y: ";
	cin >> y;
	z = Cong(x,y);
	cout << "\nTong la: " << z;
	t = Nhan(x,y);
	cout <<"\nTich la : " <<t;
}
int Cong(int a, int b)
{
	return (a + b);
}
int Nhan(int a, int b)
{
	return(a*b);
}
